#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
// Function to find the largest even number in an array
int findLargestEvenNumber(int arr[], int n){
	//@STUDENT: WRITE YOUR CODE HERE:
	int maxEven = INT_MIN;
    int found = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 && arr[i] > maxEven) {
            maxEven = arr[i];
            found = 1;
        }
    }
    if (found)
        return maxEven;
    else
        return INT_MIN; 
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int kq = findLargestEvenNumber(arr, n);
  if (kq != INT_MIN)
        printf("%d", kq);
    else
        printf("There are no even numbers");


  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
}
