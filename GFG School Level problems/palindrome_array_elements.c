#include <stdio.h>
#include <stdlib.h>
int PalinArray(int a[], int n);
int main()
{
    system ("cls");
    int a[] = {111, 222, 333, 444, 555};
    int flag = PalinArray(a, 5);
    return 0;
}
    int PalinArray(int a[], int n)
    {
    	int sum, temp, rem, digit;
    	int flag;
    	for (int i=0; i<n; i++){
    	    temp = a[i];
    	    
    	    while(temp != 0)
    	    {
    	        ++digit;
    	        temp = temp/10;
    	    }
    	    
    	    temp = a[i];
    	    sum=0;
    	    
    	    while (digit !=0)
    	    {
    	        rem = temp % 10;
    	        sum = sum + (rem * pow(10, digit));
    	        temp = temp/10;
    	        --digit;
    	    }
    	    
    	    if (sum == a[i])
    	    {
    	        flag=1;
    	    }
    	    else
    	    {
    	        flag=0;
    	    }
    	    
    	    
    	}
        if (flag == 1)
        return 1;
        else 
        return 0;
    }