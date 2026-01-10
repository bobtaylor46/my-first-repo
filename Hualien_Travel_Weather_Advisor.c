#include <stdio.h>

int main() {
  float x;
  scanf("%f", &x);
  
  if (x >= 28) {
  	printf("It's hot! A great day for the beach at Qixingtan or river tracing at Mugumuyu!\n");
  } else {
  	if (x >= 22 && x < 28) {
    	printf("The weather is comfortable. Perfect for cycling at Liyu Lake or strolling through Taroko Gorge!\n");
    }else {
    	if (x >= 18 && x < 22) {
        	printf("It's a bit cool. A good time to visit the Ruisui or Antong hot springs.\n");
        }else {
        	if (x < 18) {
            	printf("It's cold. We recommend indoor activities, like visiting the Pine Garden.\n");
            }
        }
    }
  }
  return 0;
}