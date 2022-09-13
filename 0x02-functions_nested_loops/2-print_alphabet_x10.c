#include <stdio.h>

/**
 * main - Starts here
 * Description - This script prints the alphabets in lowercase
 * Return: Returns 0 if well
 */

void print_alphabet_x10(void);

int main(void)
{
	int n = 1;

	while (n <= 10)
	{
		print_alphabet_x10();
		n++;
	}
	
	return (0);
}

void print_alphabet_x10(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
}
