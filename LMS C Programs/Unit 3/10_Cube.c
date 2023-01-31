#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int side, surface, volume;
    printf("Enter the side of the cube: ");
    scanf("%d",&side);
    surface = 6 * side * side;
    volume = side * side * side;
    printf("Surface area of the cube is: %d",surface);
    printf("\nVolume of the cube is: %d",volume);
    return 0;
}