#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    system ("cls");
    int n,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0)
        digit = -(n%10);
    else
        digit = (n%10);
    printf("The last digit of %d is %d",n,digit);
    return 0;
}