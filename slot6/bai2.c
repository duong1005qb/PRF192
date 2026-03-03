#include <stdio.h>

int main() {
	float a,b,kq;
	char kt;
	scanf("%f,%f",&a,&b);
	scanf(" %c",&kt);
	switch(kt){
		case '+': 
			kq=a + b;
			break;
		case '-': 
			kq=a - b;
			break;
		case '*': 
			kq=a * b;
			break;
		case '/': 
			if(b!=0){
				kq= a/b;
				printf("ko the chia het cho 0");
		case '%':                         
			break;
			if(b==0){
				printf(" ko the chia cho 0");
				return 0;
			}
			kq= (int)a % (int)b;
			printf("%.0f %% %.0f=%.2f",a,b,kq);
			break;
		default:
			printf("nhap ko hop le ");
		}
		printf("%.0f %c %.0f =%.2f",a,b,kq);
	return 0;	
}
