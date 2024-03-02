#include <stdio.h>
#include <stdlib.h>

int sum(int array[], int length);
int main()
{
    system ("cls");
    int myArray1[] = {1,2,6,9,8,6,5,7};
    int myArray2[] = {100};
    int myArray3[] = {99,99};
    int myArray4[] = {50,-50,100,-100,200,-200};
    printf("Sum of myArray is: %d\n", sum(myArray1,8));
    printf("Sum of myArray is: %d\n", sum(myArray2,1));
    printf("Sum of myArray is: %d\n", sum(myArray3,2));
    printf("Sum of myArray is: %d\n", sum(myArray4,6));
    return 0;
}

int sum(int array[], int length)
{
    int sum_value = 0;
    for(int i = 0; i < length; i++)
    {
        sum_value = sum_value + array[i];
    }
    return sum_value;
}