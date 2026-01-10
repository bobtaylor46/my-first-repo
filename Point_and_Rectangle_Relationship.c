#include <stdio.h>

int main() {
  int x1, x2, y1, y2, px, py;
  scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &px, &py);
  
  if ((x1 < px && px < x2) && (y1 < py && py < y2)) {
  	printf("Inside\n");
  }else {
  	if ((x1 > px || px > x2) || (y1 > py || py > y2)) {
    	printf("Outside\n");
    }else {
    	if (px = x1 || (px = x2)){
        	printf("On the border\n");
        }
    }
  }

  return 0;
}