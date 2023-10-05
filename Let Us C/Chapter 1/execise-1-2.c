/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    float distance, mtr, feet, inch, centi;
    printf("Please enter the distance in kilo meter: ");
    scanf("%f", &distance);
    mtr = distance * 1000;
    feet = mtr * 3.2;
    inch = feet * 12;
    centi = mtr * 100;
    printf("The distance in meter: %.2f\n", mtr);
    printf("The distance in feet: %.2f\n", feet);
    printf("The distance in inch: %.2f\n", inch);
    printf("The distance in centimeter: %.2f\n", centi);
    return 0;
}