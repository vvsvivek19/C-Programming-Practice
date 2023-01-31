#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num, limit;
    printf("Enter any number whose table you want: ");
    scanf("%d",&num);
    printf("Enter the limit upto which you want the table: ");
    scanf("%d",&limit);
    printf("Your table is:\n");
    for(int i=1;i<=limit;i++){
        printf("%d * %d = %d\n",num,i,i*num);
    }
    return 0;
}