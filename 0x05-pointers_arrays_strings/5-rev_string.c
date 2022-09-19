#include "main.h"
#include <string.h>

/**
 * rev_string - Function to reverse string
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int len, i;
	char str;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		str = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = str;
	}
}
