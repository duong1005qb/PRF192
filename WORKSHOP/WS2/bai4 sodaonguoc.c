#include <stdio.h>

int main() {
	int n;
	int i=0;
	printf("nhap so ");
	while(scanf("%d",&n)!=1){
		printf("nhap lai");
		fflush(stdin);
	}
	while(n>0){
		i=i*10+(n%10);
		n= n/10;
	}
	printf("So dao nguoc la: %d", i);
	return 0;
}
