/*Program to illustrate that the function prototype is optional in the caller function. 
The program is to convert a character from lowercase to uppercase.*/
#include <stdio.h>
#include <stdlib.h>
char lower_to_upper(char ch) /* Function definition precedes main()*/
{
    char c;
    c=(ch>='a' && ch<='z') ? ('A'+ch-'a'):ch;
    return c;
}
int main()
{
    system ("cls");
    char lower, upper;
    /* char lower_to_upper(char lower); */ // Function prototype is optional here
    printf("Please enter a lowercase character:");
    scanf("%c", &lower);
    upper=lower_to_upper(lower);
    printf("\nThe uppercase equivalent of %c is %c\n", lower, upper);
    return 0;
}