#include "main.h"

/**
 * print_number - prints an integer
 * @
 *
 * Descrip
 *
 * Return: void
 *
 */

void print_number(int n)
{
	unsigned int v;

	if (n < 0)
	{
		v = -n;
		_putchar('-');
	}
	else
	{
		v = n;
	}
	if (v / 10)
	{
		print_number(v / 10);
	}
	_putchar((v % 10) + '0');
}

