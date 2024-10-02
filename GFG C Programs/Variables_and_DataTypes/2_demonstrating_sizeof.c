// C Program To demonstrate
// Size of operators
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%lu\n",sizeof(char));
    printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(float));
    printf("%lu\n",sizeof(double));
    int a = 0;
	double d = 10.21;
    //here operand is an expression, it calculates the size of expression
	printf("%lu\n", sizeof(a + d));
    
    int y;
	int x = 11;

	// value of x doesn't change
	y = sizeof(x++);

	// prints 4 and 11
	printf("%i %i", y, x);

	return (0);
}