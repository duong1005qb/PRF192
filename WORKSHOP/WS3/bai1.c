#include <stdio.h> 

int namnhuan(int nam) {
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int ngaythang(int nam, int thang) { 
    switch(thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (namnhuan(nam)) return 29;
            else return 28;
        default: return 0;
    }
}

int main() {
    int thang, nam;
    
    printf("nhap thang: ");
    scanf("%d", &thang);
    printf("nhap nam: ");
    scanf("%d", &nam);

    
    int kq = ngaythang(nam, thang); 

    if (kq == 0) {
        printf("Thang khong hop le!");
    } else {
        printf("Thang %d nam %d co %d ngay", thang, nam, kq);
    }

    return 0;
}