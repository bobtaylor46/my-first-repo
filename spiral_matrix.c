#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[n][n];
    int num = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    
    while (top <= bottom && left <= right)
    {
        //1.left -> right
        for (int col = left; col <= right; col++)
        {
            matrix[top][col] = num;
            num++;
        }
        top++; // shrinks the top bound
        
        //2.top -> bottom
        for (int row = top; row <= bottom; row++)
        {
            matrix[row][right] = num;
            num++;
        }
        right--;// shrinks the right bound
        
        //3. right -> left
        if (top <= bottom)
        {
            for (int col = right; col >= left; col--)
            {
                matrix[bottom][col] = num;
                num++;
            }
            bottom--; // shrink the bottom bound
        }
        
        //4. bottom -> top
        if (left <= right)
        {
            for (int row = bottom; row >= top; row--)
            {
                matrix[row][left] = num;
                num++;
            }
            left++; //shrink the left bound
        }
    }
    
   for (int i = 0; i < n; i++)
   {
       for (int k = 0; k < n; k++)
       {
           printf("%3d", matrix[i][k]);  //%4d makes the columns align nicely
         if (k != n - 1)
           printf(" ");
       }
       printf("\n");
   }
   
    
    
    return 0;
}