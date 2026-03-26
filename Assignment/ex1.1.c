#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "products.bin"

typedef struct {
    int id;
    char name[50];
    float price;
    int quantity;
} Product;

void inputProduct(Product *p);
void clearInputBuffer();
void writeProducts(const char *filename, int numProducts);
void appendProducts(const char *filename, int numProducts);
void readProducts(const char *filename);
void modifyProduct(const char *filename);

int main() {
    const char *filename = FILE_NAME;
    int choice, n;

    do {
        printf("\n======= HE THONG QUAN LY SAN PHAM =======\n");
        printf("1. Ghi san pham moi (Ghi de)\n");
        printf("2. Them san pham vao cuoi file\n");
        printf("3. Doc danh sach san pham\n");
        printf("4. Chinh sua san pham theo ID\n");
        printf("0. Thoat\n");
        printf("Chon tuy chon: ");
        
        if (scanf("%d", &choice) != 1) {
            clearInputBuffer();
            printf("Lua chon khong hop le!\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("Nhap so luong san pham can ghi moi: ");
                if (scanf("%d", &n) == 1) {
                    if (n > 0) writeProducts(filename, n);
                    else printf("So luong phai lon hon 0!\n");
                } else {
                    clearInputBuffer();
                    printf("Loi nhap lieu!\n");
                }
                break;
            case 2:
                printf("Nhap so luong san pham can them: ");
                if (scanf("%d", &n) == 1) {
                    if (n > 0) appendProducts(filename, n);
                    else printf("So luong phai lon hon 0!\n");
                } else {
                    clearInputBuffer();
                    printf("Loi nhap lieu!\n");
                }
                break;
            case 3:
                readProducts(filename);
                break;
            case 4:
                modifyProduct(filename);
                break;
            case 0:
                printf("Dang thoat ...\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long thu lai.\n");
        }
    } while (choice != 0);

    return 0;
}

// Ham xoa bo dem nhap vao
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Ham nhap du lieu san pham
void inputProduct(Product *p) {
    printf("ID: ");
    if (scanf("%d", &p->id) != 1) {
        clearInputBuffer();
        printf("Loi nhap ID!\n");
        return;
    }
    clearInputBuffer();
    
    printf("Ten san pham: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = 0; // Xoa ky tu xuong dong
    
    printf("Gia: ");
    if (scanf("%f", &p->price) != 1) {
        clearInputBuffer();
        printf("Loi nhap gia!\n");
        return;
    }
    
    printf("So luong: ");
    if (scanf("%d", &p->quantity) != 1) {
        clearInputBuffer();
        printf("Loi nhap so luong!\n");
        return;
    }
    clearInputBuffer();
}

// Ghi san pham vao file (wb - ghi de du lieu cu)
void writeProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Loi mo file de ghi");
        return;
    }
    
    Product p;
    for (int i = 0; i < numProducts; i++) {
        printf("\nSan pham #%d:\n", i + 1);
        inputProduct(&p);
        fwrite(&p, sizeof(Product), 1, file);
    }
    
    fclose(file);
    printf("\nGhi thanh cong %d san pham.\n", numProducts);
}

// Them san pham vao file (ab - them vao cuoi)
void appendProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "ab");
    if (file == NULL) {
        perror("Loi mo file de them");
        return;
    }

    Product p;
    for (int i = 0; i < numProducts; i++) {
        printf("\nNhap san pham muon them:\n");
        inputProduct(&p);
        fwrite(&p, sizeof(Product), 1, file);
    }

    fclose(file);
    printf("\nThem thanh cong %d san pham.\n", numProducts);
}

// Doc va hien thi tat ca san pham
void readProducts(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Khong tim thay du lieu hoac file khong ton tai.\n");
        return;
    }

    Product p;
    printf("\n%-10s %-25s %-12s %-10s\n", "ID", "Ten SP", "Gia", "So luong");
    printf("------------------------------------------------------------\n");

    while (fread(&p, sizeof(Product), 1, file)) {
        printf("%-10d %-25s %-12.2f %-10d\n", p.id, p.name, p.price, p.quantity);
    }

    fclose(file);
}

// Tim kiem va chinh sua san pham (rb+ - che do doc va ghi)
void modifyProduct(const char *filename) {
    FILE *file = fopen(filename, "rb+");
    if (file == NULL) {
        perror("Loi mo file de chinh sua");
        return;
    }

    int searchID, found = 0;
    Product p;

    printf("Nhap ID san pham muon chinh sua: ");
    if (scanf("%d", &searchID) != 1) {
        clearInputBuffer();
        printf("Loi nhap ID!\n");
        fclose(file);
        return;
    }

    while (fread(&p, sizeof(Product), 1, file)) {
        if (p.id == searchID) {
            found = 1;
            printf("Tim thay san pham! Nhap thong tin moi (Giu nguyen ID %d):\n", searchID);
            clearInputBuffer();
            
            printf("Ten moi: ");
            fgets(p.name, sizeof(p.name), stdin);
            p.name[strcspn(p.name, "\n")] = 0;
            
            printf("Gia moi: ");
            if (scanf("%f", &p.price) != 1) {
                clearInputBuffer();
                printf("Loi nhap gia!\n");
                break;
            }
            
            printf("So luong moi: ");
            if (scanf("%d", &p.quantity) != 1) {
                clearInputBuffer();
                printf("Loi nhap so luong!\n");
                break;
            }

            // Di chuyen con tro ve bat dau ban ghi hien tai de ghi de
            fseek(file, -sizeof(Product), SEEK_CUR);
            fwrite(&p, sizeof(Product), 1, file);
            break;
        }
    }

    if (!found) 
        printf("Khong tim thay san pham ID %d.\n", searchID);
    else 
        printf("Cap nhat san pham thanh cong!\n");

    fclose(file);
}