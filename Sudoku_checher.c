#include <stdio.h>

int main() {
  int arr[9][9];
  
  for (int i = 0; i < 9; i++)
  {
  	for (int s = 0; s < 9; s++)
    {
    	scanf("%d", &arr[i][s]);
    }
  }
  int invalid = 0;
  
  for (int i = 0; i < 9; i++)
  {
  	for (int s = 0; s < 9; s++)
    {
    	for (int k = s + 1; k < 9; k++)
        {
        	if (arr[i][s] == arr[i][k])
            {
            	invalid = 1;
            }
        }
    }
  }
  
  if (invalid == 1)
  {
  	printf("Invalid\n");
  }else{
  	printf("Valid\n");
  }

  return 0;
}