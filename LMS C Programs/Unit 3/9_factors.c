/*Write a program to print the factors of a given number*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num;
    printf("Enter the number whose factors you want: ");
    scanf("%d",&num);
    printf("Factors are: ");
    for(int i=1;i<=num;i++)
    {
        if(num % i == 0)
        printf("%d ", i);
    }
    return 0;
}