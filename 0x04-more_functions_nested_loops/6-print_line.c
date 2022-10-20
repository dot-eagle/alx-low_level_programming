#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 * @n: argument for the function
 *
 * Description -
 *
 * Return: void as always
 *
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
