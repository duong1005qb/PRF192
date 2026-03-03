#include <stdio.h> 
float calculate_taxi_fare(float distance){
	float sotien = 0;
if(distance <= 0){
	return 0;
}else if(distance <= 1){
	sotien = 15000;
}else if(distance >=2 && distance <=30){
	sotien = 15000+(distance - 1)*12000;
}else{
	sotien = 15000+(29*12000)+(distance - 30)*10000;
} 
	return sotien;
}

int main(){
	float km;
	float sotien;
	printf("nhap so km");
	scanf("%f",&km);
	sotien = calculate_taxi_fare(km);
	printf("so km bn di la %.2f va tong so tien la %.0f",km,sotien);
	return 0;
}