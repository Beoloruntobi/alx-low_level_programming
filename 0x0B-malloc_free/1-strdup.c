#include <stdlib.h>

/**
 * *_strdup - function to duplicate string
 * @str: input string
 * Return: NULL if str is NULL
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		RETURN (null);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
