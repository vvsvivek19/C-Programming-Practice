#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    if(num < 0)
    printf("The number is negative")
    else
    printf("The number is positive");
    return 0;
}