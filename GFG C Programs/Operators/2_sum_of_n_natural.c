#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int n;
    unsigned int sum;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    sum = (n * (n + 1))/2;
    printf("Sum of %d natural numbers is %d.",n,sum);
    return 0;
}