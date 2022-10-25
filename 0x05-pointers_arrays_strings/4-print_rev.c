#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: argument to the function
 * Description: return the required result
 *
 *
 * Return: return void
 */

void print_rev(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (l = l - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
