//Write a C program to read and print information of a book using structure.
#include<stdio.h>
#include<stdlib.h>

//Declaring the structure book
struct book{
	char bookName;
	char authorName;
	int isbnNumber;
	float price;
};
int main()
{
	struct book b;//creating the variable b for structure book
	//Asking for user to input BookName, AuthorName, ISBN numer and Price of the book
    system("cls");
	printf("Enter the Book Name:");
	scanf("%c",&b.bookName);
    fflush(stdin);
	printf("\nEnter the Author Name:");
	scanf("%c",&b.authorName);
	printf("\nEnter the ISBN Number:");
	scanf("%d",&b.isbnNumber);
	printf("\nEnter the price if the book");
	scanf("%f",&b.price);
	//Displying the values enterd by user
	printf("\nThe Book Name is %c",b.bookName);
	printf("\nThe Author Name is %c",b.authorName);
	printf("\nISBN number is %d",b.isbnNumber);
	printf("\nThe price of the book is %f",b.price);
	return 0;
}