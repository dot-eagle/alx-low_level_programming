#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int l, d;
	unsigned int r;

	if (b == NULL)
	{
		return (0);
	}

	d = 0, l = 1, r = 0;

	while (b[d + 1])
	{
		if (b[d] != '0' && b[d] != '1')
		{
			return (0);
		}
		d++;
	}

	while (d >= 0)
	{
		r += ((b[d] - '0') * l);
		l *= 2;
		d--;
	}

	return (r);
}
