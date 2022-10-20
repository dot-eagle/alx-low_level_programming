#include "main.h"
#include <math.h>

/**
 * main -prints the largest prime factor of the number 612852475143
 * @
 *
 * Descript
 *
 * Return: 0 as success
 *
 */

int main(void)
{
	long int d, max, g;

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
