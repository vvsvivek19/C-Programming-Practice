/*
C Program to Print Prime Numbers From 1 to N
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void check_prime(int num);

int main()
{
    system ("cls");
    int n;
    printf("Please enter the range upto which you want to check the prime numbers: ");
    scanf("%d",&n);
    printf("Prime numbers in range from 1 to %d are: ", n);
    for(int i = 2; i<=n; i++)
    {
        check_prime(i);
    }
    return 0;
}

void check_prime(int num)
{
    int flag = 1;
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d ",num);
    }
}