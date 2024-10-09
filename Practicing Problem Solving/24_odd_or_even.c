#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num;
    
    printf("Enter a name: ");
    scanf("%d",&num);

    if(num%2 == 0)
    {
        printf("Number is even!!");
    }
    else
    {
        printf("Number is odd!!");
    }
    
    return 0;
}