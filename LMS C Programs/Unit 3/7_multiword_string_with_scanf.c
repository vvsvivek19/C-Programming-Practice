#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    char str[80];
    scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]", str);
    printf("%s",str);
    return 0;
}