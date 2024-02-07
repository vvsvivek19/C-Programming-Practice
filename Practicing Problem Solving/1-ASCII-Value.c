#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char c;
    int value;
    printf("Enter any character: ");
    scanf("%c", &c);
    value = c;
    printf("ASCII Value of the character is %d \n", value);
    printf("ASCII Value of the character is %d", c);
    return 0;
}