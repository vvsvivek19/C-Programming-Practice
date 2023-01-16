#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a, b, c, d;
    a=10;
    b=15;
    c=++a-b;
    printf("a=%d b=%d c=%d\n", a, b, c);
    d=b++ +a;
    printf("a=%d b=%d d=%d\n", a, b, d);
    printf("a/b=%d\n", a/b);
    printf("a%%b=%d\n", a%b);
    printf("a*=b=%d\n", a*=b);
    printf("%d\n", (c>d)?1:0);
    printf("%d\n", (c<d)?1:0);
    return 0;
}