#include <stdio.h>

int main() {
	float soThuc;
	int phanNguyen;
	float phanThapPhan;
	printf("Nhap vao so thuc: ");
	scanf("%f", &soThuc);
	printf("Gia tri da nhap:%.4f\n", soThuc);
	phanNguyen= (int)soThuc;
	phanThapPhan = soThuc - phanNguyen;
	printf("Phan nguyen la: %d\n", phanNguyen);
    printf ("Phan thuc la: %.4f ", phanThapPhan);
    return 0;
}
