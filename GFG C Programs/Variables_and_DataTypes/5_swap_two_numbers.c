#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int a, b;
    printf("Enter the value of a and b: ");
    /*
    Here in scanf we have provided our own separator.  
    */
    scanf("%dgfg%d",&a,&b);
    

    a = a + b;
    b = a - b;
    a = a - b;
    printf("The values of a and b after swap:\n a = %d\n b = %d\n",a,b);
    
    return 0;
}