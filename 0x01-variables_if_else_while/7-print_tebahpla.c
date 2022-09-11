#include <stdio.h>

/**
 * main - ENtry point
 *
 * Description - Print letters in reverse
 *
 * Return: Return 0
 */

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');

	return (0);
}
