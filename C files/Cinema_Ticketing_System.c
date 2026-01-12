#include <stdio.h>

int main() {
  int age;
  scanf("%d", &age);
  
  if (age <= 5) {
    printf("Free\n");
  }else {
  	if (age > 5 && age <= 12) {
    	printf("Child Ticket: $150\n");
    }else {
    	if (age > 12 && age <= 18) {
        	printf("Student Ticket: $180\n");
        }else {
        	if (age > 18 && age <= 64) {
            	printf("Adult Ticket: $250\n");
            }else {
            	if (age > 64) {
                	printf("Senior Ticket: $125\n");
                }
            }
        }
    }
  }

  return 0;
}