/*If lengths of three sides of a triangle are input through the keyboard, 
write a program to find the area of the triangle.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    system("cls");

    float a,b,c,sp,area;
    printf("Enter All three sides of the Triangle\n");
    scanf("%f %f %f", &a,&b,&c);
    sp = (a + b + c)/2;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of the triangle is: %f", area);

    return 0;
}
