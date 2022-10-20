#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Descrip
 *
 * Return: void
 *
 */

void print_number(int n)
{
	unsigned int v = n;

	if (n < 0)
	{
		v = -n;
		_putchar('-');
	}

	if ((v / 10) > 0)
	{
		print_number(v / 10);
	}
	_putchar((v % 10) + '0');
}

