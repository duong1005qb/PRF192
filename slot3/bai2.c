#include <stdio.h>
int main (){
	char kt ='a';
    printf ("%-17s %-17s %-17s %-17s %-17s %-17s\n",  "Ten bien", "kt", "Gia tri thap phan", "Gia tri Hex", "Gia tri Oct", "Kich thuoc");
    printf ("%-17s %-17c %-17d %-17x %-17o %-17d","kt", kt, kt, kt, kt, sizeof(kt) );
}
    