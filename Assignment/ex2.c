#include <stdio.h>

int main() {
    FILE *fp;
    int n;

    fp = fopen("baitap2.txt", "w");
    if (fp == NULL) {
        printf("Error!");
        return 1;
    }

    printf("Nhap vao n: ");
    scanf("%d", &n);
    
    // Ghi n vào file (chỉ ghi số để dễ đọc lại)
    fprintf(fp, "%d\n", n);

    int arr[n];
    printf("Nhap %d phan tu mang:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        fprintf(fp, "%d ", arr[i]); 
    }

    fclose(fp); 

    fp = fopen("baitap2.txt", "r");
    if (fp == NULL) {
        printf("Error!");
        return 1;
    }

    printf("\nNoi dung cua file doc duoc:\n");
    int count;
    
    // Đọc số lượng phần tử trước
    if (fscanf(fp, "%d", &count) != EOF) {
        printf("So luong n: %d\n", count);
        
        int value;
        printf("Cac phan tu: ");
        for (int i = 0; i < count; i++) {
            if (fscanf(fp, "%d", &value) != EOF) {
                printf("%d\t", value);
            }
        }
    }

    fclose(fp);
    return 0;
}