/*If cost price and selling price of an item are input through the keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he made or loss he incurred.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    float cp, sp, profit=0, loss=0;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    if(cp>sp)
    {
        loss=cp-sp;
        printf("You've incurred a loss of %f", loss);
    }
    else
    {
        profit=sp-cp;
        printf("You've incurred a profit of %f", profit);
    }
    return 0;
}