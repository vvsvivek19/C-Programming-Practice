#include<stdio.h>
#include<ctype.h>
#include<math.h> /* Mathematical functions are available in math. */
#include<stdlib.h>
int main()
{
    system("cls");
    int i=-10, e=2, d=10;
    float rad=1.57;
    double d1=2.0, d2=3.0;
    printf("%d\n", abs(i));
    printf("%f\n", sin(rad));
    printf("%f\n", cos(rad));
    printf("%f\n", exp(e));
    printf("%d\n", log(d));
    printf("%f\n", pow(d1,d2));
    return 0;
}
