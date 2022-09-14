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
		printf("%d", 0);

		for (j = 1; j <= 9; j++)
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
			if (j == 9)
			{
				break;
			}
		}
		printf("\n");
	}
}
