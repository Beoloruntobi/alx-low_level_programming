#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print numbers between
 * 0 and 9 inclusive
 *
 * Return: Return 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
