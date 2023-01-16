#include<stdio.h>
#include<stdlib.h>
int main()
/* Evaluation of expressions */
{
    system("cls");
    float a, b, c, x, y, z;
    a=20;
    b=2;
    c=-23;
    x = a + b / ( 3 + c * 4 - 1);
    y = a - b / (3 + c) * ( 4 - 1);
    z= a - ( b / ( 3 + c ) * 2 ) - 1;
    printf( "x=%f\n", x);
    printf("y=%f\n", y);
    printf("z=%f\n", z);
    return 0;
}