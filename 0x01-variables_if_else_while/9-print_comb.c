#include <stdio.h>

/**
 * main - Beginning
 * Description - This program prints
 * single digit numbers
 * Return: Returns 0
 */

int main(void)
{
	int num_1;
	
	for (num_1 = 0; num_1 <= 9; num_1++)
	{
		putchar(num_1 + '0');
		if (num_1 == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
