#include <stdio.h>

int is_within_range(int digit, int boundleft, int boundright) {
    if (digit < boundleft || digit > boundright) {
        return 0;
    }else {
        return 1;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (!is_within_range(N, 1, 1000)) return 0;
    
    
    int comforts[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &comforts[i]);
        if (!is_within_range(comforts[i], -100, 100)) return 0;
    }
    
    int sum = 0, sum2 = 0;
    
    for (int i = 0; i < N; i++)
    {
        for (int k = i; k < N; k++){
            sum += comforts[k];
            if (sum > sum2)
            {
                sum2 = sum;
            }
        }    
        sum = 0;
    }
    
    printf("%d\n", sum2);
    return 0;
}