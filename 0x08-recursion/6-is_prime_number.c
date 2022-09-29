#include "main.h"

/**
 * prime_ - Function checks if number is prime
 * @n: number
 * @i: factor
 * Return: Returns 1 if prime, else, 0
 */

int prime_(int n, int i)
{
	if ((n % i) == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + prime_(n, i + 1));
}
/**
 * is_prime_number - returns 1 if prime, else, 0
 * @n: number
 * Return: Returns 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	return (prime_(n, 2));
}
