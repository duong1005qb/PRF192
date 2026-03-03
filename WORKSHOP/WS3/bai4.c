#include <stdio.h>
void show_menu() {
    printf("\n===== MAY TINH BO TUI =====\n");
    printf("1. Cong (+)\n");
    printf("2. Tru (-)\n");
    printf("3. Nhan (*)\n");
    printf("4. Chia (/)\n");
    printf("0. Thoat\n");
}
void processor(){
	float a ,b;
	int choice;
	do{
		show_menu();
		printf ("Lua chon cua ban la:");
		scanf ("%d",&choice);
		if (choice >=1 && choice <=4){
		printf("Nhap so thu nhat: ");
        scanf("%f", &a);
        printf("Nhap so thu hai: ");
        scanf("%f", &b);		
	}
		switch (choice ){
			case 1:  
				printf ("%.0f + %.0f = %.0f\n",a,b,a+b);
				break;
			case 2: 
				printf ("%.0f - %.0f = %.0f\n",a,b,a-b);
				break;
			case 3: 
				printf ("%.0f * %.0f = %.0f\n",a,b,a*b);
				break;
			case 4: 
				if (b==0){
					printf ("Khong the chia cho 0!\n");
				}else {
					printf ("%.0f / %.0f = %.2f\n",a,b,a/b);
				}
				break;
			case 0:
                printf("Thoat chuong trinh.\n");
                break;
			default: 
				printf ("Nhap khong hop le!\n");
				break;
		}
		}while (choice!=0);	 	
}
int main (){
    processor();
    return 0;
}	