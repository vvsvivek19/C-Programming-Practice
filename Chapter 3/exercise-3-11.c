/*Given the coordinates (x, y) of center of a circle and its radius, write
a program that will determine whether a point lies inside the circle,56 Let Us C
on the circle or outside the circle.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    system ("cls");
    float cx, cy, x, y, radius, dis=0;
    printf("Program to check whether a point lies inside the circle, on the circle or outside the circle.\n");
    printf("Enter the X and Y coordinates of the center:\n");
    scanf("%f %f", &cx, &cy);
    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    printf("Enter the X and Y coordinates of point whose position you want to check:\n");
    scanf("%f %f", &x, &y);
    printf("Your center of the circle is: (%f,%f)\n", cx, cy);
    printf("Your point of which you want to check position is: (%f,%f)\n", x, y);
    
    dis = sqrt ( (x-cx) * (x-cx) + (y-cy) * (y-cy) );
    
    printf("And the result is that....\n\n");
    if (radius > dis)
    printf("Point lies inside the circle.");
    else if (radius < dis)
    printf("Point lies outside the circle.");
    else
    printf("Point lies on the circle.");

    return 0;
}