#include <stdio.h>
#include <stdlib.h>
int main()
{
	system ("cls");
	int N, E, D;
	printf("Enter Total number of sweet per box: ");
	scanf("%d",&N);
	printf("Enter Total number of sweets you must eat daily: ");
	scanf("%d",&E);
	printf("Enter Total number of days you need spent on island: ");
	scanf("%d",&D);
	int total_sweet, week_day = 0, total_box=1, remaining_sweet, total_days;
	total_sweet = N;
	total_days = D;
	while(total_days !=0)
	{
		++week_day;
		if(week_day != 7 && total_sweet < E)
		{
			total_sweet += N;
			total_box += 1;
		}
		
		if (total_sweet >= E)
		{
		   total_sweet -= E;
		    --total_days; 
		}
		else{
		    total_box = -1;
		    break;
		}
		
		if(week_day == 7){
		    week_day = 0;
		}
		
	}

    printf("%d",total_box);

	return 0;
}