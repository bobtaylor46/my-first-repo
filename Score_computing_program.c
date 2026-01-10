#include <stdio.h>

int scanning_Array(int size) {
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    return arr[size];
}

void arrange(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Print_Array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

float average(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float ave = (float)sum / size;
    return ave;
}

int main() {
    int l;
    printf("How many subjects:\n");
    scanf("%d", &l);
    for(int i = 0; i < l; i++) {
        int n;
        printf("How many students for subject %d:\n", i + 1);
        scanf("%d", &n);
        int arr[n];
        printf("score:\n");
        scanning_Array(n);
        arrange(arr, n);
        Print_Array(arr, n);
        float ave = average(arr, n);
        printf("The average is: %.2f\n", ave);
        printf("\n");
    }
    return 0;
}
