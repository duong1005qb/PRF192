#include <stdio.h>
#include <math.h>
int main() {
	int x;
	printf("Nhap x: ");
	scanf ("%d", &x);
	int preX = x;
	if (x < 0){
	 x = -x;
	 
}
    printf ("|%d| = %d" , preX, x);
    printf ("\nCan bac 2 = %.2f", sqrt(x));
    return 0;
}