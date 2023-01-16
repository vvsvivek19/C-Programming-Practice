#include <stdio.h> /* Input/Output functions are available in stdio.h */
#include <ctype.h> /* Character functions are available in the file ctype.h */
#include <stdlib.h>
int main()
/* read a lowercase character and print its uppercase equivalent */
{
    system("cls");
    int lower, upper;
    lower=getchar();
    upper=toupper(lower);
    putchar(upper);
    return 0;
}