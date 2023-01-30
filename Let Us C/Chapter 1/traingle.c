#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int S1,S2,S3;
    int largest;
    printf("Enter the all the side of triangle\n");
    printf("Enter side 1:");
    scanf("%d", &S1);
    printf("Enter side 2:");
    scanf("%d", &S2);
    printf("Enter side 1:");
    scanf("%d", &S3);
    //finding the largest of three
    if(S1>S2)
    {
        if(S1>S3)
            largest=S1;
        else
            largest=S3;
        
    }
    else
    {
        if(S2>S3)
        largest=S2;
        else
        largest=S3;
    }
    //checking if the traingle is valid or not
    if(largest==S1)
    {
        if((S2+S3)>S1)
        {
            printf("Largest side is S1");
            printf("\nTriangle is valid");
        }
        else
        {
            printf("Largest side is S1");
            printf("\nTriangle is not valid");
        }
    }
    else if(largest==S2)
    {
        if((S1+S3)>S2)
        {
            printf("Largest side is S2");
            printf("\nTriangle is valid");
        }
        else
        {
            printf("Largest side is S2");
            printf("\nTriangle is not valid");
        }
    }
    else if (largest==S3)
    {
        if((S1+S2)>S3)
        {
            printf("Largest side is S3");
            printf("\nTriangle is valid");
        }
        else
        {
            printf("Largest side is S3");
            printf("\nTriangle is not valid");
        }
    }
}
