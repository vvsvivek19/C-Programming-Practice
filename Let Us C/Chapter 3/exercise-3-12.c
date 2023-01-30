/*Given a point (x, y), write a program to find out if it lies on the X-axis, Y-axis or on the origin*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int x, y;
    printf("Enter the X and Y coordinates of the point:\n");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("Point is at origin");

    }
    else if (x == 0 && (y > 0 || y < 0))
    {
        printf("Point is on Y axis.");
    }
    else if ((x > 0 || x < 0) && y == 0)
    {
        printf("Point is on X axis.");
    }
    else
    {
        printf("Point is neither on X-axis or Y-axis nor on the origin");
    }
    return 0;
}