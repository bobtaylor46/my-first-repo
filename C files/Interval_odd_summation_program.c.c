#include <stdio.h>
//odd sum algorithm

int is_odd(int x){
	if (x % 2 == 1){
		return 1;
	}else{
		return 0;
	}
}

int odd_summation(int x, int y){
	int sum = 0;
	
	for (int i = x; i <= y; i++){
		if (is_odd(i)){
			sum += i;
		}
	}
    return sum;
}

int main(){
	int cases;
	scanf("%d", &cases);
	
	int low, high;
	int pos = 1;

	for(int i = 0; i < cases; i++){
		scanf("%d %d", &low, &high);
		
		int result = odd_summation(low, high);
		printf("Case %d: %d\n", pos, result);
        pos++;
		
	}

	return 0;
}