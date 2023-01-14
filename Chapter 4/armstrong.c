#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int num, dig=0, temp;
    int sum=0, rem=0;
    printf("Enter the number: ");
    scanf ("%d", &num);
    temp = num;
    while (temp!= 0)
    {
        ++dig;
        temp=temp/10;
    }
    temp=num;
    for (int i=0; i<dig; i++)
    {
        rem = temp%10;
        sum = sum + pow(rem,dig);
        temp=temp/10;
    }
    if (num==sum)
        printf("Armstrong");
    else
        printf("Not armstrong");
return 0;
}