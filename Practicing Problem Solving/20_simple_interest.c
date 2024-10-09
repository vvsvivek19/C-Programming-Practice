/*
C Program To Find Simple Interest
*/

#include <stdio.h>
#include <stdlib.h>

float calc_SI(float p, float r, float t);

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
    printf("Simple interest: %.2f",calc_SI(prin,rate,time));
    return 0;
}

float calc_SI(float p, float r, float t)
{
    float si;
    si = (p * r * t)/100;
    return si;
}