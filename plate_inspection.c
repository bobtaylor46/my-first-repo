#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int N;
	scanf("%d", &N);
	char a, b, c, d;
	int e;
	
	for (int i = 0; i < N; i++){
		scanf(" %c %c %c %c %d", &a, &b, &c, &d, &e);
		
		if ((d != '-')||(e > 9999)) break;
		
		double a1 = (a-65) * pow(26, 2), b1 = (b - 65) * pow(26, 1), c1 = (c - 65) * pow(26, 0);
		double sum_letters = a1+b1+c1;
		double abs_diff = abs(sum_letters-e);
		
		if (abs_diff <= 100){
			printf("nice\n");
		}else{
			printf("not nice\n");
		}
	}

return 0;
}