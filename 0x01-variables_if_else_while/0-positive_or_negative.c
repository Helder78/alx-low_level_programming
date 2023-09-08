#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	  {
	    /* the value of n is greater than 0 */
	    printf("%d is positive\n", n);
	  }
	else if(n==0)
	  {
	    /* the value of n is equal to 0 */
	    printf("%d is zero\n", n);
	  }
        else
	  {
	    /* the value of n is less than 0 */
	  printf("%d is negative\n", n);
	  }
	    
	return (0);
}
