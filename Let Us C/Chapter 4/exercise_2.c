#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int ASCII;
    char symbol;
        printf("Enter any character: ");
        scanf("%c", &symbol);
        ASCII = symbol;
        if(ASCII >= 65 && ASCII <=90)
            printf("\nYou've entered a Capital letter!");
        else if(ASCII >=97 && ASCII <=122)
            printf("\nYou've entered a Small letter!");
        else if(ASCII >= 48 && ASCII <=57)
            printf("\nYou've entered a digit!");
        else if((ASCII >=0 && ASCII<=47) || (ASCII >=58 && ASCII<=64) || (ASCII >=91 && ASCII<=96) || (ASCII >=123 && ASCII<=127))
            printf("\nYou've entered a special symbol!");
        else
            printf("\nPLEASE ENTER A VALID CHARACTER!");
       return 0;
}