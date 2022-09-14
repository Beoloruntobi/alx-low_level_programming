#include <stdio.h>

/**
 * main - Starting point
 *
 * Description - Print the first 
 * 50 fibonacci numbers
 *
 * Return: Return 0 if successful
 */

int main(void)
{
	int i;
	unsigned long num_1, num_2, next_fib;

	num_1 = 0;
	num_2 = 1;

	for (i = 0; i < 50; i++)
	{
		next_fib = num_1 + num_2;
		printf("%lu", sum);

		num_1 = num_2;
		num_2 = next_fib;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
}
