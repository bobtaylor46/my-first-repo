#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[1024];
    fgets(string, 1024, stdin);
    string[strcspn(string, "\n")] = '\0';
    
    char result[1024];
    
    int temp = 0, pos = 0;
    int i;
    
    for (i = 0; string[i] != '\0'; i++)
    {
        while (isdigit(string[i]))
        {
            temp = temp * 10 + (string[i] - '0'); // making the number
            i++;
        }
        
        if(isupper(string[i])) //why? to print char without preceeding digits
        {
           if (temp > 0) {
               for (int s = 0; s < temp; s++)
               {
                result[pos] = string[i];
                pos++;
               }
           } else {
               result[pos] = string[i];
               pos++;
           }
        }
        temp = 0;
    }
    result[pos] = '\0';
    puts(result);

    return 0;
}