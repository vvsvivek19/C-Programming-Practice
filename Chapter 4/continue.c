#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int i;
    printf("Odd numbers between 1 to 10 are:\n");
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        continue;
        printf("%d\n", i);
    }
    return 0;
}