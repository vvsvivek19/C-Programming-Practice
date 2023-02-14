#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    auto int a = 20;
    printf("%d\n",a);
    {
        a = 50;
        printf("%d\n",a);
    }
    printf("%d\n",a);
    return 0;
}