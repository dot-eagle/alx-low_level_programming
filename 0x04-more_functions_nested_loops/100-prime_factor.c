#include "main.h"
#include <math.h>


/**
 * main -
 * @
 *
 * Descript
 *
 * Return: void
 *
 */

int main(void)
{
	long int d, g, max;

	d = 612852475143;
	max = -1;
	while (d % 2 == 0)
	{
		max = 2;
		d /= 2;
	}
	for (g = 3; g <= sqrt(d); g = g + 2)
	{
		while (d % g == 0)
		{
			max = g;
			d = d / g;
		}
	}
	if (d > 2)
		max = d;
	printf("%ld\n", max);

	return (0);
}
