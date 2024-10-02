#include <stdio.h>

int main()
{
    int A[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("%d",A[1]);
    return 0;
}
