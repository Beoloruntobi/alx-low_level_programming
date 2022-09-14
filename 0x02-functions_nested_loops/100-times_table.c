#include "main.h"

/**
 * print_times_table - Function to create multiplication table
 * @n: Input into function
 */

void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			printf("%d", 0);
			
			for (j = 1; j <= n; j++)
			{
				printf(", ");
				if (i * j <= 9)
				{
					printf(" ");
				}
				else
				{
					printf("%d", (i * j) / 10);
				}
				printf("%d", (i * j) % 10);
				if (j == n)
				{
					break;
				}
			}
			printf("\n");
		}
	}
}
