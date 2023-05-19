#include<stdio.h>
#include<stdlib.h>

int find_min(int myarray[],int length);

int main ()
{
    system("cls");
    int array1[]={32,56,89,23,15,45,57,12,97};
    int array2[]={23,65,98,32,51,54,75,21};
    int min1, min2;
    min1 = find_min(array1,9);
    min2 = find_min(array2,8);
    printf("Minimum in array1 is %d\n", min1);
    printf("Minimum in array2 is %d\n", min2);
    return 0;
}

int find_min(int myarray[],int length)
{
    int smallest = myarray[0];
    for (int i=1;i<length;i++)
    {
        if(myarray[i] < smallest)
        {
            smallest = myarray[i];
        }
        
    }
    return smallest;
}