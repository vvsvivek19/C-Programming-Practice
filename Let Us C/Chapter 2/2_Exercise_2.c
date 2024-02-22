//Some of digits
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num, rem, sum = 0;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    for (int i = 0; i < 5; i++)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    printf("Sum of digits for the given number: %d", sum);
    return 0;
}