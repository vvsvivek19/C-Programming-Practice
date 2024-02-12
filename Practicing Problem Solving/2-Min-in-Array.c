#include <stdio.h>
#include <stdlib.h>
int find_min (int array[], int length);
int
main ()
{
  int myarray1[] = { 6, 9, 19, 4, 2, 7, 5, 0, 1 };
  int myarray2[] = { 6, 10, 2, 10, 4, 3, 9, 045 };

  int min1 = find_min (myarray1, 9);
  int min2 = find_min (myarray2, 8);

  printf ("Minmum number for myarray1 is: %d\n", min1);
  printf ("Minmum number for myarray2 is: %d\n", min2);
  return 0;
}

int
find_min (int array[], int length)
{
  int min = array[0];
  for (int i = 1; i < length; i++)
	{
	  //printf("Checking the array a[%d] = %d\n", i,a[i] );
	  if (array[i] <= min)
		{
		  min = array[i];
		  //printf("New min found: %d\n",min);
		}

	}
  return min;
}
