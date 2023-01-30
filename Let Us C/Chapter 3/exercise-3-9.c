/*Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");

    float l, b, area=0, peri=0;
    printf("Enter length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &b);
    
    area = l * b;
    peri = 2 * (l + b);

    if (area>peri)
    {
        printf("Yes area of the rectangle is greater than the perimeter.");
    }
    else
    {
        printf("No area of the rectangle is not greater than the perimeter.");
    }
    

    return 0;
}