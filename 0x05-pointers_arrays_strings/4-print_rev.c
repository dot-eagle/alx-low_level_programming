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
	int l = 0, c;

	while (s[c++])
		l++;

	for (c = l - 1; c >= 0; c--)
		_putchar(s[c++]);

	_putchar('\n');
}
