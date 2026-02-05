#include <stdio.h>

int main() {
	int n;
	int i=0;
	scanf("%d",&n);
	while(i*i<n){
		++i;
	}if(i*i==n){
		printf("%d la so chinh phuong",n);
	}else{
	
		printf(" ko phai la so chinh phuong");
	}
	return 0;
}
