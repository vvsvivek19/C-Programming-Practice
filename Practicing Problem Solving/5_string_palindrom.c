#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>

bool is_palindrome (char string[]);

int main()
{
    system ("cls");
    char string1[] = "not a palindrome!";
    char string2[] = "abccba";
    char string3[] = "abcdcba";
    
    if(is_palindrome(string1))
    {
        printf("%s\nis a palindrome!\n", string1);
    }
    else
    {
        printf("%s\nis not a palindrome!\n", string1);
    }

    if(is_palindrome(string2))
    {
        printf("%s\nis a palindrome!\n", string2);
    }
    else
    {
        printf("%s\nis not a palindrome!\n", string2);
    }
    
    if(is_palindrome(string3))
    {
        printf("%s\nis a palindrome!\n", string3);
    }
    else
    {
        printf("%s\nis not a palindrome!\n", string3);
    }    
    return 0;

}

bool is_palindrome (char string[])
{
    int middle = strlen(string) / 2;
    for(int i = 0; i < middle; i++)
    {
        if(string[i] != string[strlen(string) - i - 1])
        {
            return false;
            break;
        }
        return true;
    }

}