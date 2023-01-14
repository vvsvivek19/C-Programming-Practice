/*Write a program to find the absolute value of a number entered through the keyboard*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int a;
    printf("Program to find absolute value of a number.\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a < 0)
    a = -1 * a;
    printf("Absolute value of the given number is: %d", a);
    return 0;
}