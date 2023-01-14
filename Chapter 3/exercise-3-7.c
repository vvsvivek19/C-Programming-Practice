/*Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    float A1, A2, A3, sum = 0;
    printf("Program to check wheter a traingle is valide or not.\n");
    printf("Enter the first angle: ");
    scanf("%f", &A1);
    printf("Enter the second angle: ");
    scanf("%f", &A2);
    printf("Enter the third angle: ");
    scanf("%f", &A3);
    
    sum = A1 + A2 + A3;

    if (sum == 180)
    printf("Triangle IS valid!!!");
    else
    printf("Triangle is NOT valid!!!");
    
    return 0;
}
