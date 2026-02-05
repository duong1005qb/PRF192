#include <stdio.h>

int main() {
    float sodu;
    float tienrut;
    float conlai;

    printf("Nhap so du: ");
    while(scanf("%f", &sodu) != 1){
        printf("Nhap lai so du: ");
        while(getchar() != '\n');
    }

    printf("Nhap so tien muon rut: ");
    while(scanf("%f", &tienrut) != 1){
        printf("Nhap lai so tien rut: ");
        while(getchar() != '\n');
    }

    if (tienrut > sodu) {
        printf("So du khong du de rut!\n");
    } else {
        conlai = sodu - tienrut;
        if (conlai == 0) {
            printf("Ban da rut het tien!\n");
        }
        printf("Vay tien ban da rut la: %.2f va con lai la: %.2f\n", tienrut, conlai);
    }

    return 0;	
}