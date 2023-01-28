#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    /* DECLARATION OF VARIABLES */
    int count, N; 
    float sum, average, number;
    /* INITIALIZATION OF  VARIABLES*/
    sum = 0; 
    count = 0;
    printf("Enter number of terms: ");
    scanf("%d",&N);
    while (count<N)
    {
    scanf("%f", &number);
    sum = sum + number;
    count = count + 1;
    }
    average = sum / N;
    printf("N = % d \nSum = %f", N, sum);
    printf("\nAverage = %f", average);
    return 0;
}