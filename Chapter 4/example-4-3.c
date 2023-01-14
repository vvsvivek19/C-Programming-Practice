/*Write a program to calculate the salary as per the table given in the book:*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    char gen, qualification;
    int yos, salary;
    printf("Enter Gender and Qualification as G for Graduate and P for Post graduate:\n");
    scanf("%c %c", &gen, &qualification);
    printf("Enter Years of Service:\n");
    scanf("%d", &yos);
    
    if(gen == 'M')
    {
        if (yos >= 10 && qualification == 'P')
        salary = 15000;
        else if ((yos >= 10 && qualification == 'G') || (yos < 10 && qualification == 'P'))
        salary = 10000;
        else 
        salary = 7000;
    }
    else
    {
        if (yos >= 10 && qualification == 'P')
        salary = 12000;
        else if (yos >= 10 && qualification == 'G')
        salary = 9000;
        else if (yos < 10 && qualification == 'P')
        salary = 10000;
        else 
        salary = 6000;
    }
    
    printf("Salary of the employee is: %d", salary);
    
    return 0;
}