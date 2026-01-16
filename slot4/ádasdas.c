#include <stdio.h>

int main() {
	float a;
	printf("nhap so thuc");
	scanf("%f",&a);
	printf("gia tri da nhap:%.3f\n",a);
	int kq1= (int)a;
	printf("phan nguyen la:%d\n",kq1);
	float kq2= a - kq1;
	printf("phan thuc la:%.4f\n",kq2);
    return 0;
}
