#include "main.h"
#include <string.h>

/**
 * print_array - Print the second half of a string
 * @str: Input string
 */

void print_array(int *a, int n)
{
	int len, i;

	len = strlen(a);
	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n]);
}
