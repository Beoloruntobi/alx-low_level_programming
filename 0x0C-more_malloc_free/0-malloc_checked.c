#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc memory allocation
 * @b: bytes
 * Return: Returns pointer to new memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *new_memory;

	new_memory = malloc(b);
	if (new_memory == NULL)
	{
		exit(98);
	}
	return (new_memory);
}
