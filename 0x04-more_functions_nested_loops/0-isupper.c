#include "main.h"
#include <ctype.h>

/**
 * _isupper - Starts here
 * Description - This script checks that the input is in lowercase
 * @c: This is the input into the function
 * Return: Returns 1 if lowercase, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
