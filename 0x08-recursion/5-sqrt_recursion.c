#include "main.h"

/**
 * _sqrt_recursion - Function returns square root of number
 * @n: number
 * Return: Returns square root of number
 */

int my_sqrt(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + my_sqrt(n, i + 1));
}
