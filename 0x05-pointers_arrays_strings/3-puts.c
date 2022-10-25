#include "main.h"

/**
 * _puts - Prints a string
 * @str: strin pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
