#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    auto int n; /* Here the keyword auto is optional */
    long int fact(int);
    printf("read the integer n:");
    scanf("%d", &n);
    printf("\n%d!=%ld", n,fact(n) );
    return 0;
}
long int fact(int n) /* n is local to the function fact() and auto is optional*/
{
    auto int i; /* Here the keyword auto is optional */
    auto long int factorial=1; /* Here the keyword auto is optional */
    while(n>0)
    {
        factorial=factorial*n;
        n=n-1;
    }
    return factorial;
}