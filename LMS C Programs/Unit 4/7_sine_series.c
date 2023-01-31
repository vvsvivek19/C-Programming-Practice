//Program to evaluate sine series sin(x)=x-x^3/3!+x^5/5!-x^7/7!+----- depending on accuracy
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    system ("cls");
    int n, i=1,count;
    float acc, x, term, sum;
    printf("enter the angle\n");
    scanf("%d", &x);
    x=x*3.1416/180.0;
    printf("\nenter the accuracy");
    scanf("%f", &acc);
    sum=x;
    term=x;
    while ((fabs(term))>acc)
    {
    term=-term*x*x/((2*i)*(2*i+1));
    sum+=term;
    i++;
    }
    printf("\nsum of sine series is %f", sum);
    return 0;
}