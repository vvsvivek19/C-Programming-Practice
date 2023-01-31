#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int x;
    for (x=1; x<=10; x++)
    {
        if (x==5)
        break; /*break loop only if x==5 */
        printf("%d ", x);
    }
    printf ("\nBroke out of loop");
    printf( "at x = %d", x);
    return 0;
}