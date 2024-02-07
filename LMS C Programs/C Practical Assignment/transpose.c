/*
Purpose of the program: To print transpose of a matrix entered by the user
Author: Vivek Singh (Roll Number- 2214504608)
Date: 31/12/2022
*/
#include <stdio.h>
int main()
{
    system ("cls");
    int row,col, matrix[10][10], transpose[10][10]; //variable declaration
    int i,j;
    printf("Enter rows and columns\n"); //Asking user to input number of rows and columns
    scanf("%d%d", &row, &col);
    printf("Enter elements of the matrix\n");
    //For loop for taking matrix input from the user
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d", &matrix[i][j]);
    //For loop with logic to create transpose of the entered matrix
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            transpose[j][i]=matrix[i][j];
    printf("Transpose of the matrix:\n");
    //For loop to print the transpose of the matrix
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}