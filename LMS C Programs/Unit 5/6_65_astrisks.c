/*Program to create a function that types 65 asterisks in a row*/
#include <stdio.h>
#include <stdlib.h>
#define NAME "MEGATHINK, INC."
#define ADDRESS "10 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define LIMIT 65
void starbar(void); /* prototype the function */
int main()
{
    system ("cls");
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar(); /* use the function */
    return 0;
}
void starbar(void) /* define the function */
{
int count;
for (count = 1; count <= LIMIT; count++)
putchar('*');
putchar('\n');
}