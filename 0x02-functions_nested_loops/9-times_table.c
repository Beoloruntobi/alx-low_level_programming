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
			printf("%d", i * j);
			if (j == 9)
			{
				printf("$");
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
}
