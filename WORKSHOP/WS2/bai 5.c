#include <stdio.h>
int main (){
	int n;
	int tong = 0;
	do{
		printf("Nhap so: ");
		while(scanf("%d", &n) !=1){
			printf("nhap lai: ");
			fflush(stdin);
		}
		if (n>0){
			tong += n;
		}
		else if (n<0){
			printf("k tinh duoc \n");
			break;
	}
	}while(n!=0);
		printf("Tong cac so nguyen duong la: %d\n", tong);

	return 0;
}