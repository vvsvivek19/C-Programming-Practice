#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char name[] = "My Name is Ronoroa Zoro\n";
    char *ptr = name;
    while(*ptr)
    {
        putchar(*ptr++);
    }
    return 0;
}
