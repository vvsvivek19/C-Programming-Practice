#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int n;
    printf("Please Enter number of cups: ");
    scanf("%d",&n);
    if(n==0) printf("No cups were given!!");
    else if(n%2==0) printf("Opponent wins.\n");
    else printf("Player wins\n");
    
    return 0;
}