#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    printf("Integer values\n\n");
    printf("%d %d %d\n", 32767,32767+1,32767+10);
    printf("\n");
    printf("Long integer values\n\n");
    printf("%ld %ld %ld\n", 32767L, 32767L+1L, 32767L+10L);
    return 0;
}