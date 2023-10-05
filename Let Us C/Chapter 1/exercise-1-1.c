/*Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int bsa;
    float da, hra, gross_salary;
    printf("Enter the basic salary of employee: ");
    scanf("%d", &bsa);
    da = 0.40 * bsa;
    hra = 0.20 * bsa;
    gross_salary = bsa + da + hra;
    printf("Gross salary of the employee is: %.2f", gross_salary);
    return 0;
}