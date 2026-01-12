#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char string[1024];
  fgets(string, 1024, stdin);
  string[strcspn(string, "\n")] = 0;
  
  if (strlen(string) != 9){
  	printf("Invalid\n");
  }else if (string[0] != 'D') {
  	printf("Invalid\n");
  }else if (string[1] != '1' && string[1] != '2' && string[1] != '3'){
  printf("Invalid\n");
  }else if (!isdigit(string[2]) || !isdigit(string[3])) {
  	printf("Invalid\n");
  }else if (!(string[4] >= 'A' && string[4] <= 'Z')) {
  	printf("Invalid\n");
  }else if (!(string[5] >= 'A' && string[5] <= 'Z')){
  	printf("Invalid\n");
  }else if (!isdigit(string[6]) || !isdigit(string[7]) || !isdigit(string[8])) {
  	printf("Invalid\n");
  }else {
  	printf("Valid\n");
  }

  return 0;
}