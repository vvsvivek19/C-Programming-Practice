/*If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary
and DA = 90% of basic salary. If his salary is either equal to or above Rs.
1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's
salary is input through the keyboard write a program to find his gross
salary.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    float bs, hra=0, da=0, gs=0;
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &bs);
    if (bs>=1500)
    {
        hra=500;
        da=bs*98/100;
    }
    else
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    gs=bs+hra+da;
    printf("Gross salary of the employee is: %f", gs);
    return 0;
}