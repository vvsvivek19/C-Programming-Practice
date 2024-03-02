#include<stdio.h>
#include<stdlib.h>
int occurrences (int array[], int length, int to_find);
int main()
{
    system("cls");
    int myArray1[] = {4,5,7,6,5,8,3,2,1,5};
    int myArray2[] = {0,0,1,1,0,2,2,3,0,0};
    int findarr1_5 = occurrences(myArray1, 10, 5);
    int findarr2_0 = occurrences(myArray2, 10,0 );
    return 0;
}
int occurrences (int array[], int length, int to_find)
{
    int count = 0;
    for(int i = 0;i<length;i++)
    {
        if(array[i] == to_find)
        {
            count++;
        }
    }
    printf("The element %d appears %d times in the array\n", to_find,count);
    return count;
}
