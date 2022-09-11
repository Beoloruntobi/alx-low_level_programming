#include <stdio.h>

/**
 * main - Function that starts the program
 *
 * Description - This script prints the alphabet in lowercase except letters q and e
 *
 * Return: Return 0
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (!(alph == 'q' || alph == 'e'))
		{
			putchar(alph);
		}
		alph++;
	}

	putchar('\n');

	return (0);
}
