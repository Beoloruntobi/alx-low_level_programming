#include "main.h"

/**
 * times_table - Function to create multiplication table
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j <= 9)
			{
				printf(" ");
			}
			else
			{
				printf("%d", (i * j) / 10);
			}
			printf("%d", (i * j) % 10);
			if (j == 9)
			{
				printf("");
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
}
