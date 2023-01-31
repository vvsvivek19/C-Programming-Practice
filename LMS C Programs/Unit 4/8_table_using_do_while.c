/*A program to print the multiplication table from 1 x 1 to
10 x 10 as shown below using do-while loop.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int rowmax=10,colmax=10,row,col,x;
    printf(" Multiplication table\n");
    printf("........................................\n");
    row=1;
    do
    {
        col=1;
        do
        {
            x=row*col;
            printf("%4d", x);
            col=col+1;
        }
        while (col<=colmax);
        printf("\n");;
        row=row+1;
    }
    while(row<=rowmax);
    printf(".........................................\n");
    return 0;
}