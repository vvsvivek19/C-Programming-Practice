/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int ram=0, shyam=0, ajay=0;
    printf("Enter the age of Ram: %d");
    scanf("%d", &ram);
    printf("Enter the age of Shyam: %d");
    scanf("%d", &shyam);
    printf("Enter the age of Ajay: %d");
    scanf("%d", &ajay);
    
    if (ram < shyam)
    {
        if (ram < ajay)
        printf ("Ram is the Youngest");
        else
        printf("Ajay is the Youngest");
    }
    else if (shyam < ajay)
    {
        printf("Shyam is the Youngest");
    }
    else
    {
        printf("Ajay is the Youngest");
    }
    return 0;
}