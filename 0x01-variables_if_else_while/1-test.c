#include <stdio.h>

/**
 * main - Start now
 * Description - Print alphabets
 * Return: Return 0 if successful
 */

int main(void)
{
	char low_letter;

	low_letter = 'a';

	while (low_letter <= 'z')
	{
		if (low_letter != 'q' && low_letter != 'e')
		{
			putchar(low_letter);
			low_letter++;
		}
	}
	
	putchar('\n');

	return (0);
}
