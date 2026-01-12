#include <stdio.h>

int main() {

    char A[101];
    fgets(A, 101, stdin);
    A[strcspn(A, "\n")]='\0';

    char B[101];
    fgets(B, 101, stdin);
    B[strcspn(B, "\n")]='\0';

    for (int i = 0; A[i] != '\0'; i++){
        for (int s = 0; )
    }
}