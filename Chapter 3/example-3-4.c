//WAP to demonstrate the concept of nested if-else
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int i;
    printf("Enter either 1 or 2: ");
    scanf("%d", &i);
    if (i==1)
    {
        printf("Heaven is waiting for you!!!!");
    }
    else
    {
        if (i==2)
        printf("Hell is ready for you!!!!");
        else
        printf("Lets just stay on Earth, Shall we?");
    }
    return 0;
}