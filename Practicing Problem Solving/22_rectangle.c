#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    float len,bred,peri,area;

    printf("Please enter length: ");
    scanf("%f",&len);
    printf("Please enter breadth: ");
    scanf("%f",&bred);

    peri = 2 * (len + bred);
    area = len * bred;

    printf("Perimeter: %.2f\n", peri);
    printf("Area: %.2f\n",area);
    
    return 0;
}