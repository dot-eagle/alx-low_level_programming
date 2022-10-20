#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: return void
 *
 */

void print_square(int size)
{
	int r, t;

	if (size <= 0)
		_putchar('\n');

	for (r = 0; r < size; r++)
	{
		for (t = 0; t < size; t++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
