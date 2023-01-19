#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int temp, a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Entered Numbers are\n a = %d \n b = %d \n", a, b);
    temp = a;
    a = b;
    b = temp; 
    printf("Entered Numbers after the swap are\n a = %d \n b = %d \n", a, b);
    return 0;
}