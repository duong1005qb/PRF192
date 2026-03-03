#include <stdio.h>


float calculate_salary(float hour, float rate) {
    float calculate_salary = 0;

    if (hour <= 40) {
        calculate_salary = hour * rate;
    } else {
       
     	float luongcoban = 40 * rate;
        float giolamthem = hour - 40;  
        float luonglamthem = giolamthem * rate * 1.5; 
        calculate_salary = luongcoban + luonglamthem;
    }

    return calculate_salary;
}

int main() {
    float hour, rate, kq;

    printf("Nhap vao so gio lam viec: "); 
    scanf("%f", &hour);

    printf("Nhap vao don gia moi gio: ");
    scanf("%f", &rate);
    kq = calculate_salary(hour, rate);

    printf("Ket qua \n");
    printf("So gio lam: %.1f\n", hour);
    printf("Don gia: %.0f VND/gio\n", rate);
    printf("Tong luong nhan duoc: %.0f VND\n",kq);

    return 0;
}