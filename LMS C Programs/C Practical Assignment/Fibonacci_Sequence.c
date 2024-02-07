/*
Purpose of the program: To print fibonacci squence upto the number of terms enter by the user
Author: Vivek Singh (Roll Number- 2214504608)
Date: 31/12/2022
*/
#include <stdio.h>
//Main function
int main()
{
    int terms, i, sum=0; //variable declaration
    int t1=0, t2=1;
    // Taking number of terms as a input from the user
    scanf("%d", &terms);
    printf("%d %d ", t1, t2);
    //Loop logic for printing fibonacci squence
    for(i=1;i<=terms-2;i++)
    {
        sum = t1 + t2;
        printf("%d ", sum); //displaying the fibonnaci squence
        t1=t2;
        t2=sum;
    }
    return 0;
}