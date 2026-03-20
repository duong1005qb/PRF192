#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n;
  scanf ("%d",&n);
  int a[n];
  for (int i=0;i<n;i++){
  	scanf ("%d",&a[i]);
  }
  
  int max = a[0];
  int min = a[0];
  int minIndex =-1;
  int maxIndex=-1;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   for (int i=0;i<n;i++){
   if (a[i] % 2 == 0) {
            if (a[i] < min) {
                min = a[i];
                minIndex = i;
            }
            if (a[i] > max) {
                max = a[i];
                maxIndex = i;
            }
        }
    }

    if (minIndex != -1 && maxIndex != -1) {
        int temp = a[minIndex];
        a[minIndex] = a[maxIndex];
        a[maxIndex] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
  
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}