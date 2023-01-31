/*Program to calculate the absolute value of an integer*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int number;
    printf ("Type a number:");
    scanf ("%d", &number);
    if (number < 0) /* check whether the number is a negative number */
    number = - number; /* If it is negative then convert it into positive. */
    printf ("The absolute value is % d \n", number);
    return 0;
}