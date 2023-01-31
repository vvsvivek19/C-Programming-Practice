#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    if(x > 0)
    {
        if(y > 0)
            printf("Northeast.\n");
        else 
            printf("Southeast.\n");
    }
    else 
    {
        if(y > 0)
            printf("Northwest.\n");
        else 
            printf("Southwest.\n");
    }
    return 0;
}