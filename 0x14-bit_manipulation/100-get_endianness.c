#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *s;
	unsigned int g;

	g = 1;
	s = (char *)&g;

	if (*s)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
