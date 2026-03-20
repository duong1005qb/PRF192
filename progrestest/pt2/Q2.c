#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
    //@STUDENT: WRITE YOUR CODE HERE
   if(n<2) return 0;
   for(int i = 2; i <= sqrt(n); i++){
   	if(n % i == 0) return 0;
   }
    return 1;
}

// Function to count prime number numbers in an array
// Dòng 18: Giữ nguyên hoặc đặt tên cho khớp với main
int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]) == 1) {
            count++;
        }
    }
    return count; // Phai de ngoai vong for
}

// Trong hàm main (Dòng 59):
int main() {
    system("cls");
    printf("INPUT:\n");

    int n;
    int invalid = 0;
    int a[100];

    // Nhap n
    if (scanf("%d", &n) != 1 || n < 0) {
        invalid = 1;
    }

    // Nhap mang
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nOUTPUT:\n");

    if (invalid == 1) {
        printf("Invalid input");
        return 0;
    }
  
  
  
  // Fixed Do not edit anything here
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int result = countPrimes(a, n); 
    
    // PRINTF: Bien result phai nam ngoai dau ngoac kep
    printf("%d", result);

    printf("\n");
    system("pause");
    return 0;
}