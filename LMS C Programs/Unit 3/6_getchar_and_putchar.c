/* copy input to output */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int c;
    c = getchar();
    while(c != EOF)
    {
    putchar(c);
    c = getchar();
    }
    return 0;
}