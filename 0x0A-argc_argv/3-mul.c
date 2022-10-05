#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 * @argc: holds the number of arguments
 * @argv: array pointer that holds arguments
 * Return: Returns 0
 */

int main(int argc, char *argv[i])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}	
