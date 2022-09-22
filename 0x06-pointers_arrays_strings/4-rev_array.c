#include "main.h"

/**
 * reverse_array - Function to reverse an array
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int tmp, i, diff;

	i = 0;
	diff = n - 1;

	while (i < diff)
	{
		tmp = a[i];
		a[i] = a[diff];
		a[diff] = tmp;
		i++;
		diff--;
	}
}
