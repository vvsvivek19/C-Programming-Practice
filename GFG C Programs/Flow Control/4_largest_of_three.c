#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num1, num2, num3;
    printf("Please Enter three numbers: ");
    scanf("%d %d %d", &num1,&num2,&num3);

    if(num1 > num2 && num1 > num3) printf("%d is greatest",num1);
    else if (num2 > num3) printf("%d is greatest",num2);
    else  printf("%d is greatest",num3);

    return 0;
}