#include <stdlib.h>
#include <stdio.h>

/**
 * main - program prints all arguments received
 * @argc: holds number of arguments
 * @argv: array pointer holds arguments
 * Return: Returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
