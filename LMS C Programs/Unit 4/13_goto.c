#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    system ("cls");
    double a,b;
    char c;
    read:
    printf("Enter the number whose square root you want: ");
    scanf("%f",&a);
    if(a<0)
    {
        printf("Please Enter a number greater than 0.");
        goto read;
    }
    b = sqrt(a);
    printf("Square root of %f is %f",a,b);
    printf("\n\nWant to find out more square roots?\n\n");
    printf("Press Y if yes and N is no\n\n");
    scanf("%c",&c);
    if(c=='Y'||c=='y')
    goto read;
    else
    exit(0);
    return 0;
}