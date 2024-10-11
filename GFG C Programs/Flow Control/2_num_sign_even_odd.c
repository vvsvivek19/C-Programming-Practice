#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num;
    printf("Please enter a number:\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Positive ");
        if(num%2==0)
            printf("Even");
        else
            printf("Odd");
    }
    else if(num<0)
    {
        printf("Negative ");
        if(num%2==0)
            printf("Even");
        else
            printf("Odd");
    }
    else
        printf("It is 0");
    return 0;
}