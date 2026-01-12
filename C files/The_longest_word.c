#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char string[500];
  fgets(string, 500, stdin);
  string[strcspn(string, "\n")] = 0;
  
  int count1 = 0, count2 = 0;
  
  for (int i = 0; string[i] != '\0'; i++) {
  	if (isalpha(string[i])) {
      count1 += 1;
    }else {
    	if (count1 > count2){
        	count2 = count1;
        }
      count1 = 0;
    }
  }
 if (count1 > count2)
   count2 = count1;
  
  printf("Longest Word Length: %d\n", count2);

  return 0;
}