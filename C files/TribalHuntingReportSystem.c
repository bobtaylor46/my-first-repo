#include <stdio.h>

int main() {
  int code, weight;
  int count = 0;
  int totalweight = 0;
  int totalpoints = 0;
  int count2 = 0;
  
  while (1) {
  	scanf("%d %d", &code, &weight);
    if (code == 0)
      break;
    
    count ++;
    totalweight += weight;
    
    //points
    int points = 0;
    
    if (code == 1) {
      points = weight;
      if (weight > 100)
        points += 50;
    }else if (code == 2) {
      count2++;
      if (count2 <= 5)
        points = weight * 2;
      else
        points = 0;
    }else if (code == 3) {
    	points = weight * 3;
    }
    totalpoints += points;
  }
  
  printf("Total Animals Reported: %d\n", count);
  printf("Total Weight Reported: %d kg\n", totalweight);
  printf("Total Conservation Points: %d\n", totalpoints);
return 0;
}