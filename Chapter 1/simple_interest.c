#include <stdio.h>
#include <stdlib.h>
int main()
{
float si,R;
int P,T;
system("cls"); 
printf("Enter Principle: ");
scanf("%d", &P);
printf("Enter Rate: ");
scanf("%f", &R);
printf("Enter Time: ");
scanf("%d", &T);
si=P*R*T/100; //Formula for simple interest
printf("Simple interest is: %f", si);
return 0;
}