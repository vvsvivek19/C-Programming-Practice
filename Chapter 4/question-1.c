/*Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and ||*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int year;
    printf("Program to check whether the entered year is Leap year or not.\n");
    printf("Enter the year: ");
    scanf("%d", &year);
    if (!(year%4)&&year)
    printf("Yes it is a Leap year.\n");
    else
    printf("No, it is not a leap year.\n");
    return 0;
}