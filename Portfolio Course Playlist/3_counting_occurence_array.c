#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int myarray[] = {3,5,3,5,7,8,0,10,23,45,67,89};
    int element, count = 0;
    printf("Enter the element to be searched: ");
    scanf("%d",&element);
    for (int i=0; i<12; i++)
    {
        if(myarray[i] == element)
        count++;
    }
    printf("\nThe entered element appears %d times in the array",count);
    return 0;
}