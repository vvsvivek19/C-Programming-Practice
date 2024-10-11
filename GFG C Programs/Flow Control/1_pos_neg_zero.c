#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0) printf("Number is positive");
    else if(num<0) printf("Number is negative");
    else printf("Number is 0");
    return 0;
}