#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    char c;
    printf("Enter the direction you wanna go in small caps(n,s,e,w):");
    scanf("%c", &c);
    switch (c)
    {
    case 'n':
    printf("You are now walking in North direction");
    break;
    case 's':
    printf("You are now walking in South direction");
    break;
    case 'w':
    printf("You are now walking in West direction");
    break;
    case 'e':
    printf("You are now walking in East direction");
    break;
    default:
    printf("You are lost");
    break;
    }
    return 0;
}