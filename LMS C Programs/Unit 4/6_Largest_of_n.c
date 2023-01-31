//Program to find largest of n numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num, large, n, i;
    printf("enter number of numbers \n");
    scanf("%d",&n);
    large=0;
    i=0;
    while(i<n)
        {
            printf("\n enter number ");
            scanf("%d", &num);
            if(large<num)
            large=num;
            i++;
        }
    printf("\n large = %d", large);
    return 0;
}