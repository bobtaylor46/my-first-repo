#include <stdio.h>

int main() {
  int s;
  scanf("%d", &s);
  
  int h = s/3600;
  int s2 = s - (h*3600);
  int min = s2/60;
  int s3 = s2 - (min*60);
  
  printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.\n", s, h, min, s3);

  return 0;
}