//Program to add two complex numbers
//------------------------------------------

typedef struct ComplexNumber
{
    int real, img;
} complex; 

/*
 Typedef keyword: This keyword allows you to create an alias for a data type. Instead of having to 
 write struct complexNumber every time you want to declare a variable of this type, you can just 
 write complex.
*/

complex add(complex a, complex b);

#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    complex a,b,sum;
    
    printf("Enter real part of first number: ");
    scanf("%d",&a.real);
    printf("Enter imaginary part of first number: ");
    scanf("%d",&a.img);
    printf("Enter real part of second number: ");
    scanf("%d",&b.real);
    printf("Enter imaginary part of second number: ");
    scanf("%d",&b.img);
    
    printf("First number = %d + %di\n",a.real,a.img);
    printf("Second number = %d + %di\n",b.real,b.img);
    
    sum = add(a,b);

    printf("Sum = %d + %di\n",sum.real,sum.img);
    
    return 0;
}

complex add(complex a, complex b)
{
    complex sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    return sum;
}