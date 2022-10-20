#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * Description
 *
 * @n: input variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int k, l;

	if (n <= 0)
		_putchar('\n');
	for (k = 0; k < n; k++)
	{
		for (k = l; k > 0; k--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
