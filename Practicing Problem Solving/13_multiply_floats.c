#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    float num1,num2,prod;
    printf("Enter first float number: ");
    scanf("%f",&num1);
    printf("Enter second float number: ");
    scanf("%f",&num2);
    prod = num1 * num2;
    printf("Product of %.2f and %.2f is %.2f",num1,num2, prod);
    return 0;
}