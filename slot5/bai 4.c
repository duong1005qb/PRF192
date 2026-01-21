#include <stdio.h>

int main() {
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a>b && a>c){
		printf("a la gia tri lon nhat :%f",a);
	}else if (b>a && b>c){
		printf("b la gia tri lon nhat: %f",b);
	}else{
		printf("c la gia tri lon nhat: %f",c);
	}	
	
    return 0;
}
