/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int lenght = 1189, breadth = 841;
    int new_lenght, new_breadth;
    printf("Dimensions of A0 paper is %d x %d \n", lenght, breadth);
    for(int i=1; i<=8; i++){
        new_lenght = breadth;
        new_breadth = lenght / 2;
        printf("Dimensions of A%d paper is %d x %d \n", i, new_lenght, new_breadth);
        lenght =  new_lenght;
        breadth = new_breadth;
    }
    
    return 0;
}