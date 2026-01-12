#include <stdio.h>

int main() {
  int start, end;
  scanf("%d %d", &start, &end);
  int sum = 0;
  
  for (int i = start; i <= end; i++) {
  	int d1, d2, d3, d4, d5;
    int r = 0;
    
    d1 = i / 10000;
    r += i % 10000;
    d2 = r / 1000;
    r = r - r + (r % 1000);
    d3 = r / 100;
    r = r - r + (r % 100);
    d4 = r / 10;
    d5 = r % 10;
    
    if ((d1 < d2 && (d2 > d3) && (d3 < d4) && (d4 > d5)) && (d1 != d2 && (d1 != d3) && (d1 != d4) && (d1 != d5) && (d2 != d3) && (d2 != d4) && (d2 != d5) && (d3 !=d4) && (d3 != d5) && (d4 != d5))) {
    	sum += i;
    }
  }
  
  printf("%d\n", sum);

  return 0;
}