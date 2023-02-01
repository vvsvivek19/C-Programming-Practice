#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num % 2 == 0)
    printf("Number is Even!!");
    else
    printf("Number is Odd!!");
    return 0;
}