#include "main.h"

/**
 * print_number - unction that prints an integer
 * @n: integer
 * Return: void
 *
 */

void print_number(int n)
{
	unsigned int g = n;

	if (n < 0)
	{
		_putchar('-');
		g = -g;
	}

	if ((g / 10) > 0)
		print_number(g / 10);

	_putchar((g % 10) + '0');
}
