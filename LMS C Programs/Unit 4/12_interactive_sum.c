//Program to sum integers entered interactively
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    long num;
    long sum = 0L; /* initialize sum to zero */
    int status;
    printf("Please enter an integer to be summed. ");
    printf("Enter q to quit.\n");
    status = scanf("%ld", &num);
    while (status == 1)
    {
    sum = sum + num;
    printf("Please enter next integer to be summed. ");
    printf("Enter q to quit.\n");
    status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    printf("Bye Bye!!");
    return 0;
}