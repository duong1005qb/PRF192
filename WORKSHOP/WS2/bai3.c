#include <stdio.h>

int main() {
	int n;
	int i=1;
	while (scanf ("%d",&n)!=1||n<0||n>1000){
		printf("nhaplai\n");
		fflush(stdin);
	}
	while (i<=n){
		printf("%d\n",i);
		i++;
	}
    return 0;
}
