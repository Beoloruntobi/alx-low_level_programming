#include"main.h"

/**
 * main - start
 * Description - Print _putchar to screen
 * Return: Return 0 if successful
 */

int main(void)
{
	char str[] = "_putchar";
	int alph;

	for (alph = 0; alph < 8; alph++)
	{
		_putchar(str[alph]);
	}
	_putchar('\n');

	return (0);
}
