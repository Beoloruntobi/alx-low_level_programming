#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - Script to change text to lowercase
 * Return: 0
 */

int main(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');

	return (0);
}
