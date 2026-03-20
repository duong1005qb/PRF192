#include <stdio.h>
#include <math.h>

// 1. Hàm kiểm tra số nguyên tố
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// 2. Hàm duyệt mảng và in số nguyên tố
void Hamin(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]) == 1) {
            printf("%d ", arr[i]); // Chú ý: dùng arr[i], KHÔNG dùng &arr[i]
        }
    }
}

// 3. Hàm main thực thi
int main() {
    int n, a[100];
    
    printf("INPUT:\n");
    // Kiểm tra đầu vào n
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input");
        return 0;
    }

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nOUTPUT:\n");
    Hamin(a, n); // Gọi hàm để in kết quả
    
    printf("\n");
    return 0;
}