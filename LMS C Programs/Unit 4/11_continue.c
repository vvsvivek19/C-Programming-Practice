#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int x;
    for (x=1; x<=10; x++)
    { 
        if (x==5)
        continue; /* skip remaining code in loop only if x == 5 */
        printf ("%d\n", x);
    }
    printf("\nUsed continue to skip");
    return 0;
}