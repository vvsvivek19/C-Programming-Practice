#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    system ("cls");
    int num, reverse=0, rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp = num;
    while(temp!=0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp/10;
    }
    if (num == reverse)
    printf("Given number is a palindrome");
    else
    printf("Not a palindrome");
    return 0;
}