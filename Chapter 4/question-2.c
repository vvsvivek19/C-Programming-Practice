/*Any character is entered through the keyboard, write a program to
determine whether the character entered is a capital letter, a small
case letter, a digit or a special symbol.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if (a>=65&&a<=90)
    printf("You've entered a Captial letter.\n");
    else if (a>=97&&a<=122)
    printf("You've entered a Small letter.\n");
    else if (a>=48&&a<=57)
    printf("You've entered a digit.\n");
    else if ((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
    printf("You've entered a Special symbol.\n");
    else
    printf("I don't know what you've entered.\n");
    return 0;
}