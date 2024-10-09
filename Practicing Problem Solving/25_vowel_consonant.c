#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    char c;
    printf("Please enter a character: ");
    scanf("%c",&c);
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E'||c == 'i'||c == 'I'||c == 'o'|| c == 'O' || c == 'u' || c == 'U')
    {
        printf("It is a vowel!!");
    }
    else
    {
        printf("Either it is a consonant or special character!!");
    }
    return 0;
}