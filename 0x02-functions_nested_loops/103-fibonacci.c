#include "main.h"

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 as success
 *
 */

int main(void)
{
	unsigned int v, x, y, z, sum;

	v = 1;
	x = 2;
	y = 3;
	sum = 2;

	for (z = 2; z <= 32; z++)
	{
		if (y % 2 == 0)
			sum = sum + y;
		v = x;
		x = y;
		y = v + x;
	}
	printf("%u\n", sum);

	return (0);
}
