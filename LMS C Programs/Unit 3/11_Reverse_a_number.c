#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    system ("cls");
    int num, sum=0, reverse=0, rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem = num % 10;
        sum = sum + rem;
        reverse = reverse * 10 + rem;
        num = num/10;
    }
    printf("Reverse of the number is: %d",reverse);
    printf("\nSum of digit is: %d",sum);
    return 0;
}