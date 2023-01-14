/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.*/
//Any year that is evenly divisible by 4 is a leap year
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int year;
    printf("This a program to check whether the entered year is leap year or not\n");
    printf("Enter the year you wanna check: ");
    scanf("%d", &year);
    if (year%4==0)
    printf("It is a Leap year");
    else
    printf("Not a Leap year");
    return 0;
}