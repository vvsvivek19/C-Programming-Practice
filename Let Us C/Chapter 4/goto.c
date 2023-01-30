// C program to check if a number is positive or negative using goto statement
#include <stdio.h>
void CheckPositiveOrNegative(int num)
{
	if (num>0)
		goto positive;
	else
		goto negative;
positive:
	printf("%d is positive", num);
	return;
negative:
	printf("%d is negative", num);
}

int main() {
	int num=-26;
	CheckPositiveOrNegative(num);
	return 0;
}
