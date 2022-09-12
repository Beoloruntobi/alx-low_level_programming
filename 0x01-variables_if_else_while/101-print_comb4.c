#include <stdio.h>

/**
 * main - Start
 * Description - Print all possible combination
 * of 3 single digit numbers
 * Return: Return 0
 */

int main(void)
{
	int num_1, num_2, num_3;

	for (num_1 = 0; num_1 < 9; num_1++)
	{
		for (num_2 = 0; num_2 <= 9; num_2++)
		{
			for (num_3 = 1; num_3 <= 9; num_3++)
			{
				putchar(num_1 + '0');
				putchar(num_2 + '0');
				putchar(num_3 + '0');
				if (num_1 == 8 && num_2 == 9 && num_3 == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
