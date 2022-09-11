#include <stdio.h>

/**
 * main - Entry point of the script
 *
 * Description - This script prints
 * all single digit numbers in base 10
 * starting from 0, followed by a new line.
 *
 * Return: Return 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	putchar('\n');

	return (0);
}
