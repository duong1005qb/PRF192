#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int invalid = 0;
  int n;
	if(scanf("%d", &n) != 1){
  	invalid = 1;
  }
	int sum = 0;
	int digit;
	while(n!=0){
		digit = n%10;
		sum += digit;
		n /= 10;
	}

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(invalid == 1){
  	printf("-1");
  }
  else{
  	printf("%d", abs(sum));
  }

  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
