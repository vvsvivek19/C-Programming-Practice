#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int M,N;
    long int F=1;
    printf("enter the number\n");
    scanf("%d",&N);
    if(N<=0)
    F=1;
    else
    {
    for(M=1;M<=N;M++)
    F*=M;
    }
    printf("the factorial of the number is %ld",F);
    return 0;
}