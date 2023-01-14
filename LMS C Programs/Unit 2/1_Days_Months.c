#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int month, days;
    printf("Enter the number of days: ");
    scanf("%d",&days);
    month=days/30;
    days=days%30;
    printf("It converts to \n%d months and %d days",month, days);
    return 0;
}