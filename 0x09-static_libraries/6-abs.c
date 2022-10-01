#include "main.h"
#include <stdlib.h>

/**
 * _abs - Starts here
 * Description - This script changes the input to positive
 * @n: Input into the function
 * Return: Returns the number
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = abs(n);
	}
	return (n);
}
