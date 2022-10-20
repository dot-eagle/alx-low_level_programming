#include "main.h"

/**
 * print_most_numbers - prints numbers, from 0 to 9 except 2 and 4
 *
 * Description: print out the required result
 *
 * Return: 0 return void
 *
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
			_putchar(x);
	}
	_putchar('\n');
}
