#include <stdio.h>

int longboom (int arr[], int n) {
	if (n == 0)
      return 0;
  
  int maxlen = 1, current = 1;
  
  for (int i = 1; i < n; i++) {
  	if (arr[i] > arr[i-1]) {
    	current++;
    }else {
    	current = 1;
    }
    
    if (current > maxlen)
      maxlen = current;
  }
  return maxlen;
}

int main() {
  int n;
  scanf("%d ", &n);
  
  int arr[n];
  scanf("%d", &arr[0]);
  
  int peak = arr[0], trough = arr[0];
  int peak_index = 1, trough_index = 1;
  
  for (int i = 1; i < n; i++) {
  	scanf("%d", &arr[i]);
    
    if (arr[i] > peak){
      peak = arr[i];
      peak_index = i + 1;
    }
    
    if (arr[i] < trough) {
      trough = arr[i];
      trough_index = i + 1;
    }  
 }
  
  printf("Peak: Day %d (%d visitors)\n", peak_index, peak);
  printf("Trough: Day %d (%d visitors)\n", trough_index, trough);
  printf("Longest Boom: %d days\n", longboom(arr, n));

  return 0;
}