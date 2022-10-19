#include "main.h"

/**
 * jack_bauer - Print all 60 * 24 minutes in the day
 *
 * Description: print out the required results
 *
 * Return: return the integer value 0
 *
 */

void jack_bauer(void)
{
	int b, d;

	for (b = 0; b < 24; b++)
	{
		for (d = 0; d < 60; d++)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(':');
			_putchar((d / 10) + '0');
			_putchar((d / 10) + '0');
			_putchar('\n');
		}
	}
}
