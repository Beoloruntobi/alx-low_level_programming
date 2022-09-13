#include "main.h"

/**
 * print_alphabet_x10 - Starts here
 * Description - This script prints the alphabets
 * in lowercase
 */

void print_alphabet_x10(void)
{
	int num, alph;

	num = 1;
	while (num <= 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		putchar('\n');
		num++;
	}
}
