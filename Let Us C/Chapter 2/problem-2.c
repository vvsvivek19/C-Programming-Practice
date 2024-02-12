/*If a five-digit number is input through the keyboard, write a program to
reverse the number*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    system ("cls");
    int num, sum = 0, temp, rem, count=4;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    temp = num;
    for (int i=1;i<=5;i++){
        rem = temp % 10;
        sum = sum + (rem * pow(10,count));
        --count;
        temp = temp /10;
    }
    printf("Reverse = %d", sum);
    return 0;
}