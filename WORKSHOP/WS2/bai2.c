#include <stdio.h>
#include <math.h>
int main(){
	float n;
	int count=0;
	while(count<5){//lap count 5lan 
		while (scanf("%f",&n)!=1 || n<=0 || n>1000){
    	printf("nhap lai:");
    	fflush(stdin);//xoavungdem
    	//while(getchar()!='\n');
	}
	printf("can bac 2 la:%.2f\n",sqrt(n));
	count++;
	}
	printf("xuat sac");
}
    
    
    
    
    
    