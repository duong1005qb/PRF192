#include <stdio.h>
int solonnhat( int a, int b, int c){
	int max=a;
	if(max<b){
		max=b;
	}if(max<c){
		max=c;
	}
	return max;
}
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int kq=solonnhat(a,b,c);
	printf("so lon nhat la %d",kq);
}