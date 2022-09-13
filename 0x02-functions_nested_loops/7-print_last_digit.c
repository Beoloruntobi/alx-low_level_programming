#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Starts here
 * Description - This script prints
 * the last digit in a given number
 * @n: Input into the function
 * Return: Returns the number
 */

int print_last_digit(int n)
{
	int last_d;

	if (n < 0)
	{
		last_d = abs(n % 10);
	}
	else
	{
		last_d = n % 10;
	}

	_putchar(last_d + '0');
	return (last_d);
}
