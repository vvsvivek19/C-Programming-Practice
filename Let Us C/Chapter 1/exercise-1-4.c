/*Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    float faren, celcius;
    printf("Enter the temperature in Farenhite: ");
    scanf("%f", &faren);
    celcius = (faren - 32)/1.80;
    printf("Temperatire in celcius is: %.2f\n", celcius);
    return 0;
}