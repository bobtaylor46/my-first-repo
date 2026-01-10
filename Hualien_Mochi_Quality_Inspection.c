#include <stdio.h>

int main() {
  int n, x;
  scanf("%d", &n);
  
  int q = 0;
  for (int i = 0; i < n; i++) {
  	scanf("%d", &x);
    if (x >= 250 && x <= 270) {
    	q += 1;
    }else {
    	q += 0;
    }
  }
  
  printf("Total Qualified Boxes: %d\n", q);
  
  

  return 0;
}
