#include "main.h"
#include <ctype.h>

/**
 * _islower - Starts here
 * Description - This script checks that the input is in lowercase
 * Return: Returns 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
