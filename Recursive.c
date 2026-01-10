#include <stdio.h>

//Fibonacci sequence

int F(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else if (n > 1)
        return F(n - 1)+F(n - 2);
}

int main() {
    //recurssive function
    //using the function itself inside of the function
    int n;
    scanf("%d", &n);
    
    int result = F(n); 
    printf("%d", result);
    return 0;
}