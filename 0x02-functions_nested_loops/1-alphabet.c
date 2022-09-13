#include "main.h"

/**
 * Description - This script prints the alphabets
 * in lowercase
 */

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
