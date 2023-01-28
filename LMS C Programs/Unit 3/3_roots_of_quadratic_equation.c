#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    system ("cls");
    float a, b, c, discriminant, root1, root2;
    printf("input the values of a,b and c\n");
    scanf ("%f %f %f", &a, &b, &c);
    discriminant = b*b - (4*a*c);
    if (discriminant<0)
        printf("roots are imaginary\n");
    else
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf ("Root1 = %5.2f \nR5oot2 = %5.2f \n", root1, root2);
    }
    return 0;
}


    
    