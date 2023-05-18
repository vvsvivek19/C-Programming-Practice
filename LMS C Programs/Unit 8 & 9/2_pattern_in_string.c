#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
char *mystrstr(char [], char []);
int main()
{
    system ("cls");
    char str[255], pattern[255];
    char *check;
    puts("Enter your main string: ");
    gets(str);
    puts("\nEnter your Pattern: ");
    gets(pattern);
    check = mystrstr(str,pattern);
    if (check == NULL )
    printf("\nMATCH NOT FOUND");
    else 
    printf("\nMATCH FOUND");
    return 0;
}
char *mystrstr(char input[], char pat[])
{
    char *start, *p1, *p2;
    for(start = &input[0]; *start != '\0'; start++)
    { /* for each position in input string... */
        p1 = pat; /* prepare to check for pattern string there */
        p2 = start;
        while(*p1 != '\0')
        {
            if(*p1 != *p2) /* characters differ */
            break;
            p1++;
            p2++;
        }
        if(*p1 == '\0') /* found match */
        return start;
    }
    return NULL;
}