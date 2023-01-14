/*The marks obtained by a student in 5 different subjects are
input through the keyboard. The student gets a division as per the
following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int sub1, sub2, sub3, sub4, sub5;
    float sum=0, percentage=0;
    printf("Enter marks of the students in all five subjects out of 100 one by one\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Aggregate:%.2f\n", sum);
    percentage = sum/500 * 100;
    printf("Your percentage is %.2f\n", percentage);
    
    if (percentage >= 60)
    printf("You got: First Division\n");
    if ((percentage>=50) && (percentage<59))
    printf("You got: Second Division\n");
    if((percentage>=40) && (percentage<49))
    printf("You got: Third Division\n");
    if (percentage<40)
    printf("You have Failed\n");
    return 0;
}