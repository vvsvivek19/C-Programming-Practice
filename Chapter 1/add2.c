#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a,b,c;
    printf("Enter the two numbers for addition\n");
    printf("Number a= ");
    scanf("%d", &a);
    printf("Number b= ");
    scanf("%d", &b);
    c=a+b;
    printf("Sum of the given two number is= %d", c);
    return 0;
}