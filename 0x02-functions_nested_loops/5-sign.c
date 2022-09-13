#include "main.h"

/**
 * print_sign - Starts here
 * Description - This script checks that the input is an alphabet character
 * @n: Input into the function
 * Return: Returns 1 if letter, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
