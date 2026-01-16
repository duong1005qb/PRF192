#include <stdio.h>

int main() {
	int a,b;
	char pt;
	printf("nhap a,b");
	scanf("%d,%d",&a,&b);
	printf("nhap pt:\n");
    scanf(" %c",&pt);
	if(b!=0){
		printf("ket qua: %d/%d=%.2f",a,b,(float)a/b);
	}	
	else{
		printf("khong the chia cho 0");
	}

    return 0;
}
