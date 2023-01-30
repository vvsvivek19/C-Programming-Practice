/*According to the Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int yer,a, day = 0;
	printf("Enter a year : ");
	scanf("%d", &yer);
	//Counting total number of days
	for(a = 1; a < yer; a++)
	{
		if(a % 4 == 0) //366 days if a leap year
			day = day + 366;
		else
			day = day + 365;
	}
	
	day = day % 7;
	
	if(day == 1)
		printf("It'll be Monday on 01/01/%d", yer);
	if(day == 2)
		printf("It'll be Tuesday on 01/01/%d", yer);
	if(day == 3)
		printf("It'll be Wednesday on 01/01/%d", yer);
	if(day == 4)
		printf("It'll be Thursday on 01/01/%d", yer);
	if(day == 5)
		printf("It'll be Friday on 01/01/%d", yer);
	if(day == 6)
		printf("It'll be Saturday on 01/01/%d", yer);
	if(day == 0)
		printf("It'll be Sunday on 01/01/%d", yer);
    
    return 0;
}