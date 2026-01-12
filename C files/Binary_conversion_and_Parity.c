#include <stdio.h>

int make_decimal(int x, int y){
	return (x * 10) + y;
}

int convert_array(int arr[], int size){
	int not_zero = 0;
	int num = 0;
	for (int i = 0; i < size; i++){
		if (arr[i] == 1) not_zero = 1;

		if (not_zero){
			num = make_decimal(num, arr[i]);
		}
	}
	return num;
}

int count_ones(int arr[], int size){
	int sum = 0;

	for (int i = 0; i < size; i++){
		int not_zero = 0;
		if (arr[i] == 1) not_zero = 1;

		if (not_zero){
			if (arr[i] == 1) sum += 1;
		}
	}

	return sum;
}

int main() {
	int input;

	int Q = 0, R = 0;
	int num = 0;

	while (1){
		int arr[1024]={0};
		int pos = 1023;

		scanf("%d", &input);  //example 10
		if (input == 0) break;

		if (input == 1){
			printf("The parity of %d is %d (mod 2).\n", input, input);
			continue;
		} 

		while (input > 0){
			Q = input / 2;  //quotient = 10 / 2 = 5
			R = input % 2; //remainder = 10 % 2 = 0

			arr[pos] = R;

			if (Q == 1){
				arr[pos - 1] = Q;
				break;
			}

			input = Q; 		//input = 5
			pos--;
		}
		int final_num = convert_array(arr, 1024);
		int parity = count_ones(arr, 1024);

		printf("The parity of %d is %d (mod 2).\n", final_num, parity);

	}

	return 0;
}