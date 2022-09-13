#include <stdio.h>

/**
 * main - Starts here
 * Description - This script prints the alphabets in lowercase
 * Return: Returns 0 if well
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
}
