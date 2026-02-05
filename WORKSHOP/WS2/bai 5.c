#include <stdio.h>
int main (){
	int n;
	int tong = 0;
	while(1){
		printf("Nhap so: ");
		while(scanf("%d", &n) !=1){
			printf("nhap lai: ");
			fflush(stdin);
		}
		if (n==0 || n<0){
			printf("Dung vong lap");
			break;
		}
		if (n>0){
			tong += n;
		}
	printf("Tong cac so nguyen duong la: %d\n", tong);
	}
	return 0;
}