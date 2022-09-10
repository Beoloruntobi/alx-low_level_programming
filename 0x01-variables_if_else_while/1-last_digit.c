#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char last_d;
	last_d = n[-1];
	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_d);
	}

	return (0);
}
