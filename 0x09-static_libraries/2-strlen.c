#include "main.h"
#include <string.h>

/**
 * _strlen - Function to return the length of a string
 * @s: Character pointer
 * Return: Returns the length if successful
 */

int _strlen(char *s)
{
	int len;

	len = strlen(s);

	/**
	 * for (len = 0; *s != '\0'; s++)
	 *{
	*	len++;
	*}
	 _putchar(len + '0');*/

	return (len);
}

