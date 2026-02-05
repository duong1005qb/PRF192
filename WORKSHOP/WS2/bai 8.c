#include <stdio.h>
#include <math.h>
int main (){
	int a,b,temp;
	printf("Nhap vao 2 so a,b: ");
	while (scanf ("%d %d",&a ,&b)!=2){
	printf("Sai roi! Nhap lai a,b: ");
	while (getchar() != '\n');
	}
	if (a==0&&b==0){
		printf("UCLN khong xac dinh!");
		return 0;
	}
	a=abs (a);
	b=abs (b);
	while (b!=0){
		temp =a%b;
		a=b;
		b=temp;
	}
	printf ("UCLN la: %d",a);
	return 0;
}
