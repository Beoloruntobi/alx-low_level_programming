#include "main.h"
#include <string.h>

/**
 * print_array - Print the second half of a string
 * @a: Input array
 * @n: number of numbers in array to print
 */

void print_array(int *a, int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
	else
	{
		printf("\n");
	}
}
