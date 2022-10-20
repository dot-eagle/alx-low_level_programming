#include "main.h"

/**
 * print_square - prints a square
 * @size: argument
 *
 * Description
 *
 * Return: void
 */

void print_square(int size)
{
	int r, t;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (t = 0; t < size; t++)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
	else if (size <= 0)
		_putchar('\n');
}
