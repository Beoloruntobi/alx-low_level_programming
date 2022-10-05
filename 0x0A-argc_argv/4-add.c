#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check string for num
 * @num: string
 * Return: 0 if success, 1 otherwise
 */

int isNum(char num[])
{
	int i, len = strlen(num);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(num[i]))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: Returns 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
