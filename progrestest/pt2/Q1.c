#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int invalid = 0;
  int a[100];
  if(scanf("%d", &n) != 1 || n<=0){
  	invalid = 1;
  }
  for(int i=0; i<n; i++){
  	scanf("%d", &a[i]);
  }
  int found = 0;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  if(invalid == 1){
  	printf("i1nvalid input");
  	return 0;
  }
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   for(int i=0; i<n; i++){
  	if(a[i]%2 == 0){
  		printf("%d ", i);
  		found = 1;
	  }
	}
	
	if (found == 0){
		printf("Not found");
	}
		 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}