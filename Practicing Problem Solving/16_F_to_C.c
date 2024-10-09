#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    float faren, cel;
    printf("Enter the temperature in farenhites: ");
    scanf("%f",&faren);
    cel = (faren - 32) * 5 / 9;
    printf("Temperature in celcius: %.2f",cel);

    return 0;
}