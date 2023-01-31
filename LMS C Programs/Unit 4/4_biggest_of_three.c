#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int a,b,c,big;
    printf ("Enter three numbers:\n");
    scanf ("%d %d %d", &a, &b, &c);
    // check whether a is greater than b if true then
    if (a>b) { 
        if(a>c) // check whether a is greater than c
            big = a ; // assign a to big
        else 
            big = c ; // assign c to big
    } 
    else {
        if (b>c) // if the condition (a>b) fails check whether b is greater than c
            big = b ; // assign b to big
        else 
            big = c ; // assign C to big
    }
       printf ("Largest of %d, %d & %d = %d", a,b,c,big);
    return 0;
}