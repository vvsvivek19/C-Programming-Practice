/*Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    if (i/2==0)
    printf("Number is even ");
    else
    printf("Number is odd ");
    return 0;
}
