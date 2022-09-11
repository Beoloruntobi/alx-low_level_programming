#include <stdio.h>

/**
 * main - Function that starts the program
 *
 * Description - This script prints the alphabet
 * in lowercase except letters q and e
 *
 * Return: Return 0
 */

int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al == 'q' || al == 'e')
		{
			al++;
		}

		putchar(al);
		al++;
	}

	putchar('\n');

	return (0);
}
