#include<stdio.h>
#include<stdlib.h>

int find_max(int myarray[],int length);

int main()
{
    system("cls");
    int array1[]={32,56,89,23,15,45,57,12,97};
    int array2[]={23,65,98,32,51,54,75,21};
    int max1, max2;
    max1 = find_max(array1,9);
    max2 = find_max(array2,8);
    printf("Maximum in array1 is %d\n", max1);
    printf("Maximum in array2 is %d\n", max2);
    return 0;
}

int find_max(int myarray[],int length)
{
    int maximum = myarray[0];
    for (int i=1; i<length; i++)
    {
        if(myarray[i] > maximum)
        {
            maximum = myarray[i];
        }
        
    }
    return maximum;
}