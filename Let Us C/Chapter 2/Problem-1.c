//If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int num, sum=0, mod_num, remainder;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i=0; i<5; i++)
    {
        remainder = num % 10;
        sum= sum + remainder;
        num= num/10;
    }
    printf("Sum of the digits of entered five digit number is %d", sum);
    return 0;
}
