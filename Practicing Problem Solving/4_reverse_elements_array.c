#include <stdio.h>
#include <stdlib.h>

void reverse(int array[], int length);
int main()
{
    system ("cls");
    int myArray1[] = {1,2,3,4,5,6,7,8,9};
    int myArray2[] = {6,5,4,3,2,1};
    reverse(myArray1,9);
    printf("----------------------------------\n");
    reverse(myArray2,6);
    return 0;
}

void reverse(int array[], int length)
{
    int temp = 0;
    for (int i = 0; i < (length / 2); i++)
    {
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
    for (int i = 0; i < length ; i++)
    {
        printf("myArray[%d] = %d \n",i ,array[i]);
    }
}