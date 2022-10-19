#include "main.h"

/**
 * times_table - printing the times table starting with 0 to 9
 *
 * Return: return times table result
 *
 */

void times_table(void)
{
	int row, col, hyt;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			hyt = row * col;
			if (hyt < 10)
			{
				if (col > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(hyt + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(hyt / 10 + '0');
				_putchar(hyt % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

