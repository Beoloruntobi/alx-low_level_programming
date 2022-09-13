#include <stdio.h>
#include <ctype.h>

/**
 * main - Starts here
 * Description - This script checks that the input is an alphabet character
 * Return: Returns 1 if letter, 0 otherwise
 */

int _isalpha(int c);

int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);

}

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
