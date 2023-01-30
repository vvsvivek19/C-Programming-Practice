/*While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If quantity and
price per item are input through the keyboard, write a program to calculate the total expenses.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int qty, dis=0;
    float rate, total;
    printf("enter quantity: ");
    scanf("%d", &qty);
    printf("enter rate: ");
    scanf("%f", &rate);

    if (qty>1000)
    {
        dis=10;
    }
    
    total= qty*rate - (qty*rate*dis/100);
    printf("your total is: Rs %f", total);
    
    return 0;
}