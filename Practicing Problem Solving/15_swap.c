#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    printf("Numbers before swap:\n a = %d \n b = %d \n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Numbers after swap:\n a = %d \n b = %d \n",a,b);
    return 0;
}