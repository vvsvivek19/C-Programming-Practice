#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int count, n;
    long int fib(int);
    printf("How many Fibonacci numbers? ");
    scanf("%d", &n);
    for(count=1;count<=n;count++)
    {
    printf("\ni=%d F=%ld", count, fib(count));
    }
    return 0;
}
long int fib(int count)
{
    /* calculate a Fibonacci number using the formula
    if i=1, F=0; if i=2, F=1, and F=F1+F2 for i>=3 */
    static long int f1=0, f2=1; /* declaration of static variables */
    long int f;
    if (count==1)
    f=0;
    else if (count==2)
    f=1;
    else
    f=f1+f2;
    f2=f1;
    f1=f; /* f1 and f2 retain their values between different calls of the function*/
    return f;
}