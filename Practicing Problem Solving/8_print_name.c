#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    char name[100];
    printf("Enter your name: ");
    gets(name);
    printf("Hi %s",name);

    return 0;
}