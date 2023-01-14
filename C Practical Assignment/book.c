/*
Purpose of the program: To create structure named book and store and print information of a book entered by a under
Author: Vivek Singh (Roll Number- 2214504608)
Date: 31/12/2022
*/
#include<stdio.h>
#include<string.h>

//Declaring the structure 
struct bookdetail
{
    char name[20];
    char author[20];
    int ISBN;
    float price;
};
 
int main()
{
    //creating a structure vairable
    struct bookdetail b; 
    
    //asking user to enter details of the book
    printf("Enter the Details of the Books");
    printf("\nEnter the Book Name:");
    fgets(b.name, 20, stdin);
    printf("Enter the Author of Book:");
    fgets(b.author, 20, stdin);
    printf("Enter the ISBN Code of the Book:");
    scanf("%d",&b.ISBN);
    printf("Enter the Price of Book:");
    scanf("%f",&b.price);
    //Printing details of the book
    printf("Book Details are\n");
    printf(" Book Name:%s\n", b.name);
    printf(" Book Author:%s \n",b.author);
    printf(" Book ISBN code:%d \n",b.ISBN);
    printf(" Book Price:%f \n",b.price);

return 0; 
}
 
