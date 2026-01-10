#include <stdio.h>
#include <string.h>

int is_palindrome(char s[], int left, int right) {
    
    while (left < right){
        if (s[left] != s[right])
        {
            return 0; //not palindrome
        }
        left++;
        right--;
    }
    return 1;//palindrome
}

int main() {
    char string[1024];
    fgets(string, 1024, stdin);
    string[strcspn(string, "\n")] = '\0';
    
    int len = strlen(string);
    
    int palindrome_index1 = 0, palindrome_index2 = 0;
    int palindrome_len1 = 0, palindrome_len2 = 0;
    
   for (int i = 0; i < len; i++)
   {
       for (int k = len - 1; k >= i; k--)
       {
         if (string[i] == ' ' || string[k] == ' ')
           continue;
           if (is_palindrome(string, i, k))
           {
               palindrome_len1 = k - i + 1;
               if (palindrome_len1 > palindrome_len2)
               {
                   palindrome_len2 = palindrome_len1;
                   palindrome_index1 = i;
                   palindrome_index2 = k;
               }
           }
       }
   }
   
   char answer[1024];
   int pos = 0;
   for (int i = palindrome_index1; i <= palindrome_index2; i++)
   {
       answer[pos] = string[i];
       pos++;
   }
   
   answer[pos] = '\0';
    
    puts(answer);
    
    return 0;
}