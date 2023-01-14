#include <stdio.h>
#include <stdlib.h>
int print2largest(int arr[], int n);
int main()
{
    system ("cls");
    
    return 0;
}
int print2largest(int arr[], int n) {
	    int largest=0, sec_largest=-1; 
	    for (int i=1; i<n; i++){
	        if(arr[i]>=arr[largest])
	        largest=i;
	    }
	    for (int i=0; i<n; i++){
	        if (arr[i] != arr[largest]){
	           if(sec_largest==-1)
	                sec_largest=i;
	           else if (arr[i]>arr[sec_largest])
	                sec_largest=i;
	        }
	        
	    }
	   if (sec_largest==-1)
	   return -1;
	   else 
	   return arr[sec_largest];
	}