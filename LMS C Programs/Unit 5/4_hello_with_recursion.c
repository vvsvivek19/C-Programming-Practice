#include <stdio.h>
#include <stdlib.h>
int hello(int);
int main()
{
    system ("cls");
    int num;
    printf("How many times you want to print hello?: ");
    scanf("%d",&num);
    hello(num);
    return 0;
}
int hello(int n)
{
    if(n==0)
    {
        exit(0);
    }
    else
    {
        printf("Hello\n");
        hello(n-1);
    }
}