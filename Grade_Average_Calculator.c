#include <stdio.h>

int main() {
  int x, y, z;
  scanf("%d%d%d", &x, &y, &z);
  int sum = x + y + z;
  int avg = sum/3;
  double P_avg = (double) sum/3;
  
  printf("Total score: %d\n", sum);
  printf("Integer average: %d\n", avg);
  printf("Precise average: %f\n", P_avg);

  return 0;
}