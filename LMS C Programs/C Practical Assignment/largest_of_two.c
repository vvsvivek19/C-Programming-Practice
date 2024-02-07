/*
Purpose of the program: To print largest of two numbers entered by the user
Author: Vivek Singh (Roll Number- 2214504608)
Date: 31/12/2022
*/
#include <stdio.h>
int main()
{
    int x,y; //variable declaration
    printf("Enter the values for x and y:\n");
    scanf("%d %d", &x, &y); // Taking two numbers as a input from the user
    //if block begins
    if (x>y)
    printf("X is the larger number- %d", x);
    else
    printf("Y is the larger number- %d", y);
    //if block ends
    return 0;
}