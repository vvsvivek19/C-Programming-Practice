//A program to find the largest of three integers
#include <stdio.h>
#include <stdlib.h>
int max(int, int);
int main()
{
    system ("cls");
    int x, y, z, w;
    /* read the integers */
    printf("\nx=" );
    scanf("%d", &x);
    printf("\ny=");
    scanf("%d", &y);
    printf("\nz=");
    scanf("%d", &z);
    /* Calculate and display the maximum value */
    w= max(x,y);
    printf("\nmaximum=%d\n", max(z,w));
    return 0;
}
int max(int a, int b)
{
int c;
c=(a>=b)?a:b;
return c;
}