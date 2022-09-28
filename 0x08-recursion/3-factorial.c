#include "main.h"

/**
 * factorial - Function returns factorial of given number
 * @n: Given number
 * Return: Returns factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
