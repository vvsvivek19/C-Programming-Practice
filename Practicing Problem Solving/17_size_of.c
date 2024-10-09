#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    printf("Size of int is: %d bytes\n",sizeof(int));
    printf("Size of float is: %d bytes\n",sizeof(float));
    printf("Size of double is: %d bytes\n",sizeof(double));
    printf("Size of char is: %d bytes\n",sizeof(char));
    return 0;
}
/*
1. You can solve this problem also by giving diff type variables in size of
2. Another method is pointer method: The pointer method involves incrementing a pointer and 
observing the difference in memory addresses, which corresponds to the size of the data type.
*/