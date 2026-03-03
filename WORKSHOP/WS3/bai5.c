#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool is_prime(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return n>1;
}
int main (){
	int a, b;
    printf("Nhap a,b: ");
    if(scanf("%d%d", &a,&b)!=2||a<=0||b<=0){
    	printf ("Nhap sai!");
    	return 0;
	}
    if (a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    printf ("Cac so nguyen to tu %d den %d la :\n",a,b);
    for (int i=a;i<=b;i++){
    	if (i>2&&i%2==0){
    		continue;
		}
		if (is_prime(i)){
			printf ("%d\n",i);
		}
	}
	return 0;
}