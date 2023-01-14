/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num, rev=0, rem=0;
    int org_num;
    printf("Enter the number you wanna check: ");
    scanf("%d", &num);
    org_num = num;
    rem = num % 10;
    num = num / 10;
    rev = rem * 10000;
    rem = num % 10;
    num = num / 10;
    rev = rev + rem * 1000;
    rem = num % 10;
    num = num / 10;
    rev = rev + rem * 100;
    rem = num % 10;
    num = num / 10;
    rev = rev + rem * 10;
    rev = rev + num;
    printf("Reverse of the entered number is: %d \n", rev);
    if (rev == org_num)
    printf("Reverse and the orginal number are same\n");
    else
    printf("Reverse and the orginal number are not same\n");
    return 0;
}