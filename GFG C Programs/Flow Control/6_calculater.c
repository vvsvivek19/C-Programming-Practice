#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    double num1,num2;
    char operator;
    printf("Enter the two numbers to perform operation upon: ");
    scanf("%lf %lf",&num1,&num2);
    printf("Enter the operation to perform.(Please enter operator symbol) - ");
    fflush(stdout);
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':
        printf("%.2lf %c %.2lf = %.2lf",num1,operator,num2,num1 + num2);
        break;
    case '-':
        printf("%.2lf %c %.2lf = %.2lf",num1,operator,num2,num1 - num2);
        break;
    case '*':
        printf("%.2lf %c %.2lf = %.2lf",num1,operator,num2,num1 * num2);
        break;
    case '/':
        printf("%.2lf %c %.2lf = %.2lf",num1,operator,num2,num1 / num2);
        break;
    case '%':
        printf("%.2lf %c %.2lf = %d",num1,operator,num2,(int)num1 % (int)num2);
        break;
    default:
        printf("Invalide operator");
        break;
    }

    return 0;
}