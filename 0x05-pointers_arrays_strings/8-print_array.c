#include "main.h"
#include <string.h>

/**
 * print_array - Print the second half of a string
 * @str: Input string
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
