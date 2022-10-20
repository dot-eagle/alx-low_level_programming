#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer input
 * the size of table to print to, max 15
 *
 * Return : return  always
 *
 */

void print_times_table(int n)
{
	int q, r, t;

	if (n < 0 || n > 15)
		;
	else
	{
		for (q = 0; q <= n; q++)
		{
			_putchar('0');
			for (r = 1; r <= n; r++)
			{
				t = r * q;
				_putchar(',');
				_putchar(' ');
				if (t < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				}
				else if (t < 100)
				{
					_putchar(' ');
					_putchar(t / 10 + '0');
					_putchar(t % 10 + '0');
				}
				else
				{
					_putchar(t / 100 + '0');
					_putchar(t % 100 / 10 + '0');
					_putchar(t % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
