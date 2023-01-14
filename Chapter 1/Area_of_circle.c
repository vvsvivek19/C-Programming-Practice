#include<stdio.h>
#include<stdlib.h>
#define PI 3.13159 //Defining value of Pi
int main()
{
    float area, radius; //declaration statement
    printf("Enter Radius of the circle: "); //prompt 
    scanf("%f", &radius); //taking input from the user
    area= PI*radius*radius; //Calculating Area
    printf("Area of the circle is= %f", area);
    return 0;
    /*return 0; is not required but is good practice 
    meaning the program executes and returns a 0 to the OS 
    in case the system needs to examine this value.*/
}