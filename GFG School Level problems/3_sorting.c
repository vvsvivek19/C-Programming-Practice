#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int a[10], temp;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i=0; i<10; i++)
    {
        for (int j=0; j < 10; j++){
            if((j+1) != 10){
            if(a[j+1] > a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
      
    return 0;
}