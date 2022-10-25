#include "main.h"

/**
 * puts2 - Prints one char out of two of a string
 * Description
 * @str: The string containing characters
 * Return: void
 */

void puts2(char *str)
{
	char *ptr = str;
	int len = 0;
	int m;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	for (m = 0; m <= len - 1; m++)
	{
		if (m % 2 == 0)
			_putchar(str[m]);
	}
	_putchar('\n');
}
