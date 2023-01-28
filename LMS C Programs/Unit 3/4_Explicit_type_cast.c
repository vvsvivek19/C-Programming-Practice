#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    /* Program to find average of two integers */
    float avg;
    int n=2,n1,n2;
    printf("enter any 2 numbers\n");
    scanf("%d %d",&n1,&n2);
    avg=(n1+n2)/(float)n;
    printf("their average is %f",avg);
    return 0;
}