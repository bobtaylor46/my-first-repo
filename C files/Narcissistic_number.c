#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  
  if (x < 100 || x > 999) {
  	return 0;
  }
  int x1, x2, x3;
  x1 = x / 100;
  x2 = (x / 10) % 10;
  x3 = x % 10;
  
  if ((x1*x1*x1) + (x2*x2*x2) + (x3*x3*x3) == x) {
  	printf("Narcissistic Number\n");
  }else {
  	if (x1 == x3) {
    	printf("Palindrome\n");
    }else {
    	if ((x1<x2) && (x2<x3)) {
        	printf("Increasing\n");
        }else {
        	printf("Ordinary\n");
        }
    }
  }

  return 0;
}