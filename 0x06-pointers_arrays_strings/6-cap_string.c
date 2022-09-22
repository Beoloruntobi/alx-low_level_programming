#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: Pointer to the string
 * Return: @str
 */

char *cap_string(char *str)
{
	int i = 0;
	int arr[] = {9, 10, 32, 33, 34, 40, 41, 44, 59, 46, 63, 123, 124};

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
			{
				str[i] -= 32;
			}
			for (int j = 0; j < 13; j++)
			{
				if (str[i - 1] == arr[j])
				{
					str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
