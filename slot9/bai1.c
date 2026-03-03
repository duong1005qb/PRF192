#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "products.bin"

struct Product {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
};

// ===== Function Prototypes =====
void writeProducts();
void appendProducts();
void readProducts();
void modifyProduct();
int isIDExists(int id);

// ===== Main Menu =====
int main() {
    int choice;

    do {
        printf("\n===== PRODUCT MANAGEMENT SYSTEM =====\n");
        printf("1. Write Products (Overwrite)\n");
        printf("2. Append Products\n");
        printf("3. Read Products\n");
        printf("4. Modify Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            while(getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1: writeProducts(); break;
            case 2: appendProducts(); break;
            case 3: readProducts(); break;
            case 4: modifyProduct(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}

// ===== Check if ID exists =====
int isIDExists(int id) {
    FILE *fp = fopen(FILENAME, "rb");
    if (fp == NULL) return 0;

    struct Product p;
    while (fread(&p, sizeof(struct Product), 1, fp)) {
        if (p.product_id == id) {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

// ===== Write (Overwrite) =====
void writeProducts() {
    FILE *fp = fopen(FILENAME, "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int n;
    printf("Enter number of products to write: ");
    scanf("%d", &n);

    struct Product p;

    for (int i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);

        do {
            printf("Product ID: ");
            scanf("%d", &p.product_id);
            if (isIDExists(p.product_id))
                printf("ID already exists! Enter another.\n");
        } while (isIDExists(p.product_id));

        getchar();
        printf("Product Name: ");
        fgets(p.product_name, sizeof(p.product_name), stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &p.price);

        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct Product), 1, fp);
    }

    fclose(fp);
    printf("Products written successfully!\n");
}

// ===== Append =====
void appendProducts() {
    FILE *fp = fopen(FILENAME, "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int n;
    printf("Enter number of products to append: ");
    scanf("%d", &n);

    struct Product p;

    for (int i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);

        do {
            printf("Product ID: ");
            scanf("%d", &p.product_id);
            if (isIDExists(p.product_id))
                printf("ID already exists! Enter another.\n");
        } while (isIDExists(p.product_id));

        getchar();
        printf("Product Name: ");
        fgets(p.product_name, sizeof(p.product_name), stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &p.price);

        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct Product), 1, fp);
    }

    fclose(fp);
    printf("Products appended successfully!\n");
}

// ===== Read =====
void readProducts() {
    FILE *fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("File not found or empty!\n");
        return;
    }

    struct Product p;

    printf("\n%-10s %-20s %-10s %-10s\n", "ID", "Name", "Price", "Quantity");
    printf("------------------------------------------------------------\n");

    while (fread(&p, sizeof(struct Product), 1, fp)) {
        printf("%-10d %-20s %-10.2f %-10d\n",
               p.product_id, p.product_name, p.price, p.quantity);
    }

    fclose(fp);
}

// ===== Modify =====
void modifyProduct() {
    FILE *fp = fopen(FILENAME, "rb+");
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    int id, found = 0;
    struct Product p;

    printf("Enter Product ID to modify: ");
    scanf("%d", &id);

    while (fread(&p, sizeof(struct Product), 1, fp)) {
        if (p.product_id == id) {
            found = 1;

            printf("Product found! Enter new details.\n");

            getchar();
            printf("New Name: ");
            fgets(p.product_name, sizeof(p.product_name), stdin);
            p.product_name[strcspn(p.product_name, "\n")] = 0;

            printf("New Price: ");
            scanf("%f", &p.price);

            printf("New Quantity: ");
            scanf("%d", &p.quantity);

            fseek(fp, -sizeof(struct Product), SEEK_CUR);
            fwrite(&p, sizeof(struct Product), 1, fp);

            printf("Product updated successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Product ID not found!\n");

    fclose(fp);
}