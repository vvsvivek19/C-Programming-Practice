/* A company insures its drivers in the following cases:
 If the driver is married.
 If the driver is unmarried, male & above 30 years of age.
 If the driver is unmarried, female & above 25 years of age.
In all other cases, the driver is not insured. If the marital status, sex and
age of the driver are the inputs, write a program to determine whether
the driver should be insured or not*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    char ms, gen;
    int age;
    
    printf("A Program to check whether the driver is insured or not.\n");
    printf("--------------------------------------------------------\n");
    printf("Enter martial status and gender:\n");
    scanf("%c %c", &ms, &gen);
    printf("Enter Age: ");
    scanf("%d", &age);

    if ((ms == 'M') || (ms =='m'))
    printf("\nDriver is ensured");
    else if ((ms == 'U' || ms == 'u') && (gen == 'M' && age>30))
    printf("\nDriver is ensured");    
    else if ((ms == 'U' || ms == 'u') && (gen == 'F' && age>25))
    printf("\nDriver is ensured");    
    else
    printf("\nDriver is Not ensured");    
    return 0;
}
