#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  int n;
  scanf("%d",&n);

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(n<=0){
  	printf("Error: n must be greater than 0.\n");
  	return 0;
  }
  double S = 0;
  long long gt = 1;
  for(int i = 1; i<=n ;i++){
  	gt = gt*i;
  	S = S + 1.0 / gt;
  }
  printf("%.3f",S);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
