#include <stdio.h>

int main() {
	int n,quy;
 	int kq=scanf("%d",&n);
	if(n<1 || n> 12 ){
		printf("nhapsai!");
		return 0;
	}
	switch (n){
		case 1: case 2: case 3:
			quy=1;
		break;		
		case 4: case 5: case 6:
			quy=2;
			break;
		case 7: case 8: case 9:
			quy=3;
			break;
		case 10: case 11: case 12:
			quy=4;
			break; 
		default :
			printf("nhapsai");
			break;
		}
	printf("thang%d thuoc quy%d",n,quy);
	return 0;
} 
	
	
