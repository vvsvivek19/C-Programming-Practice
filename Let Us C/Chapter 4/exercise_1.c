/*Any year is entered through the keyboard, write a program to determine whether the year 
is leap or not. Use the logical operators && and ||.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int year, result;
    printf("Enter the year you wanna test: ");
    scanf("%d", &year);
    if(year % 4 == 0)
    {
        result = year / 4;
        if(result % 2 == 0)
        printf("\nEntered year is Leap year!");
        else
        printf("\nEntered year is not Leap year!");
    }
    else
        printf("\nEntered year is not Leap year!");
    return 0;
}

