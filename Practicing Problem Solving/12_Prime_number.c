#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    system ("cls");
    int num;
    int flag = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num <= 1)
    {
        printf("Not a prime number");
    }
    else
    {
        for(int i=2;i<=sqrt(num);i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
        
    if(flag == 1)
        printf("Prime number");
    else
        printf("Not a prime number");
    return 0;
}