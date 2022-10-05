#include <stdlib.h>
#include <stdio.h>

/**
 * main - program prints number of arguments passed
 *
 * @argc: holds number of arguments
 * @argv: array pointer holds the arguments
 *
 * Return: Returns 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}
