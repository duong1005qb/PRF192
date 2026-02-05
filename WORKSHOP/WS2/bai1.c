#include <stdio.h>
#include <math.h>
/*cach1 : de nhat, ko ktra loi khi nhap sai chu
int main() {
	float n;
	scanf("%f",&n);
	while (n<=0||n>=1000){
		scanf("%f",&n);
	}
	printf("can bac 2 n la: %.2f",sqrt(n));
    */
    int main (){
    float n;
    while (scanf("%f",&n)!=1 || n<=0 || n>1000){
    	printf("nahp lai:");
    	fflush(stdin);//xoavungdem
    	//while(getchar()!='\n');
	}
	printf("can bac 2 la:%.2f",sqrt(n));
}
