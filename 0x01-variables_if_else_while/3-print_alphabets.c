#include <stdio.h>

/**
 * main - Beginning of program
 * Description - This is a scripts that prints alphabets,
 * first in lowercase, then in uppercase.
 * It then prints a new line.
 * Return: Returns 0
 */

int main(void)
{
	char lower_alph = 'a';
	char upper_alph = 'A';

	while (lower_alph <= 'z')
	{
		putchar(lower_alph);
		lower_alph++;
	}
	while (upper_alph <= 'Z')
	{
		putchar(upper_alph);
		upper_alph++;
	}

	putchar('\n');

	return (0);
}
