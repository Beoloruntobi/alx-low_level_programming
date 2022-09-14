#include <stdio.h>

/**
 * main - Starts here
 * Description - SUm of all multiples
 * of 3 and 5 between 1 and 1024
 * Return: Return 0 
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
