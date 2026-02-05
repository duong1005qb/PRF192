#include <stdio.h>
int main (){
	int n ;
	int count =1;
	int i=1;
	printf("Nhap n:");
	while (scanf ("%d",&n)!=1||n<=0){
		printf("Nhap lai n:");
		fflush (stdin);
	}
	while (i<=n){
		printf("%d\n",i);	
		i++;
	}
		while (count <=10){
			printf ("%d * %d = %d\n",n,count,n*count);
			count ++;
		}
	return 0;  
}	