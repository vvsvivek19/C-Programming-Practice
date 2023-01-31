#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int floor;
    printf("Enter the floor you want to go:\n");
    scanf("%d", &floor);
    switch (floor)
    {
    case 1:
        printf("Welcome to fruits section!");
        break;
    case 2:
        printf("Welcome to Cloths section!");
        break;
    case 3: 
        printf("Welcome to Cinema section");
        break;
    default:
        printf("Floor does not exist");
        break;
    }
    return 0;
}