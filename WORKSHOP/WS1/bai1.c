#include <stdio.h>

int main() {
	float km,phut;
	float tien;
	float thoigiancho;
	float tiencho=0,tientaxi;
	printf("nhap so km da di:");
	if(scanf("%f",&km) !=1||km<0){
	printf("nhapsai\n");
	}
	printf("nhapthoigiancho: ");
	if (scanf("%f",&thoigiancho) !=1 || thoigiancho < 0 ){
		printf("nhapsai\n");
	}
	
	 
	
	if(km<=0.5){
		tien=12000;
	}else if (km<=30){
		tien=12000+(km-0.5)*15000;
	}else{
		tien=12000+29.5*15000+(km-30)*12000;
		
	}if(thoigiancho>5){
		tiencho = (thoigiancho-5)*1000;
	}
	tientaxi = tien+tiencho;
 	printf("sotienphaitra:%.0f",tientaxi);
    printf("\n----------------------------------------------------------\n");
    printf("%-15s | %-15s | %-15s\n", "km", "thoigiancho", "tientaxi");
    printf("----------------------------------------------------------\n");
    printf("%-15.2f | %-15.0f | %-15.0f\n", km, thoigiancho, tientaxi);
    

    return 0;
}
