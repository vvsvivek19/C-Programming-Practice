#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
    printf("Number of elements: %lu\n",sizeof(arr)/sizeof(arr[0]));
    
    return 0;
}