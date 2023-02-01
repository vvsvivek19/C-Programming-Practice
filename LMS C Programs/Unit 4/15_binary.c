#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int num, a[32], i=0, j, temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        a[i] = (temp % 2);
        temp = temp / 2;
        if(temp == 1)
        {
            ++i;
            a[i] = temp;
            break;
        }
        i++;
    }
    printf("Binary equivalent of %d is\n", num);
    for(j=i;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}