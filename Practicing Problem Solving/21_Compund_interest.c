/*
Formula to calculate simple interest:
Amount= P(1 + R/100)t
Compound Interest = Amount – P
Where, 
P is principal amount 
R is the rate and 
T is the time span
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calc_CI(float p, float r, float t);

int main()
{
    system ("cls");
    float prin, rate, time;
    printf("Enter principle: ");
    scanf("%f",&prin);
    printf("Enter rate: ");
    scanf("%f",&rate);
    printf("Enter time: ");
    scanf("%f",&time);
    printf("Compound interest: %.2f",calc_CI(prin,rate,time));
    return 0;
}

float calc_CI(float p, float r, float t)
{
    float amount, ci;
    amount = p * pow((1 + (r/100)),t);
    ci = amount - p;
    return ci;
}