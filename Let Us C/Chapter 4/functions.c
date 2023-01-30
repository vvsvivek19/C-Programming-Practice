#include <stdio.h>
#include <stdlib.h>
float area_of_circle(float);
int main()
{
    system ("cls");
    float a, radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    a=area_of_circle(radius);
    printf("Area of the circle is: %f", a);
    return 0;
}
float area_of_circle(float r)
{
    float area;
    area=3.14*r*r;
    return area;
}
