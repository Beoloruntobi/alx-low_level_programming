#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Starts here
 * Description - This script checks that the input is an alphabet character
 * @c: Input into the function
 * Return: Returns 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
