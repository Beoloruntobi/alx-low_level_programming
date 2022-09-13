#include <stdio.h>
#include <ctype.h>

/**
 * main - Starts here
 * Description - This script checks that the input is in lowercase
 * Return: Returns 1 if lowercase, 0 otherwise
 */

int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

}

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
