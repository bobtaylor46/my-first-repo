#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  
  if (N % 2 == 0)  //stop the prog from scanning even nums
    return 0;
  else if (N < 1 || (N > 19)) // the input stays within this interval
    return 0;
  
  int mid = N/2 + 1;   //Will be usefull when changing the pattern from rising to decreasing.
  
  //first part with the midle because it is part of the inreasing.
  
  for (int i = 1; i <= mid; i++) {
    //condition varies: mid - 1 equals num of times to print space.
  	for (int s = 1; s <= mid - i; s++) {
    	printf(" ");
    }
    for (int j = 1; j <= 2*i - 1; j++) {
    	printf("*");
    }
    
    printf("\n"); // skip a line for mid times.
  }
  
  for (int i = mid - 1; i >= 1; i--) {
  	for (int s = 1; s <= mid - i; s++) {
    	printf(" ");
    }
    for (int j = 1; j <= 2*i - 1; j++) {
    	printf("*");
    }
    printf("\n");
  }
	return 0;
}