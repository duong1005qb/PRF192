#include <stdio.h>

int tong(int n){
	int tong=0;
	for(int i=1 ; i<=n ;i++){
		if(n % i==0){
			tong += i;
		}
	}
	return tong;
}
int main (){
	int n;
	scanf("%d",&n);
	printf("%d",tong(n));
	return 0;
}
	
	
