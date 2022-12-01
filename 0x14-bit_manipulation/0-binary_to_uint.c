#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int l, h, d;

	if (b != NULL)
	{
		for (l = 0; b[l] != '\0'; l++)
			if (b[l] != 48 && b[l] != 49)
			{
				return (0);
			}

		l = 0;
		for (h = 0, l--; l >= 0; l--)
		{
			d = d + ((b[l] - '0') << h);
			h++;
		}
	}
	else
	{
		return (0);
	}
	return (d);
}
