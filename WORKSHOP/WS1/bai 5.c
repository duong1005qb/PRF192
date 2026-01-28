#include <stdio.h>

int main() {
	int kwh, price;
	printf ("Nhap so kwhs: ");
	scanf ("%d", &kwh);
	if (kwh <= 100){
		price = kwh*950;
	}
	else if (kwh <= 150){
		price = 100*950 + (kwh - 100)*1250;
	}
	else if (kwh<=200){ 
		price = 100*950 + 50*1250 + (kwh-150)*1350;
	}
	else if (kwh >200){
		price = 100*950 + 50*1250 + 50*1350 + (kwh-200)*1350;
	}
	printf ("Tien dien phai tra: %d", price);
	
    return 0;
}