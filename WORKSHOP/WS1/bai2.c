#include <stdio.h>
int main(){
	float cc , gk , ck;
	char diemChu;
	float dtb;
	printf ("Diem chuyen can ");
	scanf ("%f",&cc);
	printf ("Diem giua ki ");
	scanf ("%f",&gk);
	printf ("Diem cuoi ky ");
	scanf ("%f",&ck);
		if (cc < 4 || gk < 4 || ck < 4 || diemChu == 'F'){
		printf("Khong du dieu kien tot nghiep!");
		return 0;
		}
	dtb = (cc*0.1)+(gk*0.3)+(ck*0.6);
	if (dtb>=8.5 && dtb <=10){
		diemChu = 'A';
	}else if (dtb>=7){
		diemChu ='B';
	}else if (dtb>=5.5){
		diemChu ='C';
	}else if (dtb>=4){
		diemChu ='D';
	}else{
		diemChu ='F';
	}
	printf("Diem chu la: %c",diemChu);

	return 0;
}