#include <stdio.h>
#include <string.h>

int right_most(int x)
{
    int right = x % 10;
    return right;
}

int main() {
    //get the first string
    char string1[1024];
    fgets(string1, 1024, stdin);
    string1[strcspn(string1, "\n")] = '\0';
    
    //get the second string
    char string2[1024];
    fgets(string2, 1024, stdin);
    string2[strcspn(string2, "\n")] = '\0';
    
    
    //add them, but problem here! cannot add two strings together
    //you need to convert before adding
    //to convert to digit: string[i] - '0';
    //to convert back to string: result[i] + '0';
    
    int lenA = strlen(string1), lenB = strlen(string2);
    int last_indexA = lenA - 1, last_indexB = lenB - 1;
    
    //max length
    int max_len;
    if (lenA > lenB)
    {
        max_len = lenA;
    }else{
        max_len = lenB;
    }
    char result[max_len];
    int carry = 0;
    int index_in_A, index_in_B;
    
    //adding them one by one from the right.
    for (int i = max_len - 1; i >= 0; i--)
    {
        index_in_A = last_indexA - (max_len - 1 - i); //to find the correct digit for addition in string1;
        index_in_B = last_indexB - (max_len - 1 - i);
            //to set numbers to zero when there is no more index to add to the other number;
            int digitA, digitB;
        if (index_in_A >= 0)
        {
            digitA = string1[index_in_A] - '0';
        }else{
            digitA = 0;
        }
        
        if(index_in_B >= 0)
        {
            digitB = string2[index_in_B] - '0';
        }else{
            digitB = 0;
        }
        
        int sum = digitA + digitB + carry;
        carry = sum / 10;
            result[i] = right_most(sum) + '0';   
    }
    
    char final_result[max_len + 2];
    if (carry > 0)
    {
        final_result[0] = carry + '0';
        for (int i = 1; i <= max_len; i++)
        {
            final_result[i] = result[i - 1];
        }
        final_result[max_len + 1] = '\0';
        
    }else{
        for (int i = 0; i < max_len; i++)
        {
            final_result[i] = result[i];
        }
        final_result[max_len] = '\0';
    }
    
    puts(final_result);

    return 0;
}