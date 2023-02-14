//Program to check whether a given integer is a perfect square or not.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int psquare(int);
int main()
{
    system ("cls");
    int num;
    printf(" Enter the number:");
    scanf("%d", &num);
    if(psquare(num)) /* main() calls the function psquare() */
        printf("%d is a perfect square\n",num);
    else
        printf("%d is not a perfect square\n",num);
    return 0;
}
int psquare(int x)
{
    int positive(int);
    float sqr;
    if(positive(x)) /* psquare() in turn calls the function positive() */
    {
        sqr=sqrt(x);
    }
    if(sqr - sqr == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int positive(int m)
{
    if(m>0)
    return 1;
    else 
    return 0;
}