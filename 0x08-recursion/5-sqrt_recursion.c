#include "main.h"

/**
 * my_sqrt - Function returns square root of number
 * @n: number
 * @i: factor
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
/**
 * _sqrt_recursion - Function returns square root of number
 * @n: number
 * Return: Returns square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (my_sqrt(n, 2));
}
