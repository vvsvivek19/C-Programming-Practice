#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int d,n;
    printf("Enter the day number between 0 and 1: ");
    scanf("%d",&d);
    printf("Enter how many days before: ");
    scanf("%d",&n);
    n = n % 7;
    n = d - n;
    if (n<0)    
        {
            n += 7;
        }

    switch (n)
    {
    case 0:
        printf("Day before was Sunday");
        break;
    case 1:
        printf("Day before was Monday");
        break;
    case 2:
        printf("Day before was Tuesday");
        break;
    case 3:
        printf("Day before was Wednesday");
        break;
    case 4:
        printf("Day before was Thursday");
        break;
    case 5:
        printf("Day before was Friday");
        break;
    case 6:
        printf("Day before was Saturday");
        break;
    
    default:
        printf("Invalid day");
        break;
    }
    return 0;
}