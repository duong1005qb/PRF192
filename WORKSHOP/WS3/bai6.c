#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void play_game(){
	int solanDoan=0,soBimat,guess;
	 srand(time(NULL));
    soBimat = rand() % 20 + 1;
    printf ("---------------Game doan so (1-20)---------------\n");
    printf("--------------Ban co toi da 7 lan doan!---------------\n");
    while (solanDoan<=7){
    	printf("Nhap so ban doan (1-20): ");
        if (scanf("%d", &guess)!=1){
        	printf ("Nhap sai!");
        	return 0;
		}
         if (guess <= 0) {
            printf("So khong hop le! Nhap lai!\n");
            continue;   
        }
        solanDoan ++;
        if (guess == soBimat) {
            printf("Chuc mung! Ban doan dung sau %d lan doan!\n", solanDoan);
            break;   
		}else if (guess <soBimat){
			printf ("Lon hon!");
		}else{
			printf ("Nho hon!");
		}
		
		if (solanDoan > 7 && guess != soBimat) {
        printf("Ban da het luot! So dung la: %d\n", soBimat);
    }
}
}
int main() {
    play_game();
    return 0;
}