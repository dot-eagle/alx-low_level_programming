#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Desc
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int x, y, k, w, t;

	t = size;
	w = 1;
	if (size <= 0)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < (t - 1); x++)
			_putchar(' ');
		for (k = 0; k < w; k++)
			_putchar('#');
		_putchar('\n');
		t--;
		w++;
	}
}
