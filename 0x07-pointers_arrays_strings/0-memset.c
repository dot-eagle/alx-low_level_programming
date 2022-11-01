#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @b: constant char byte
 * @s: pointers to allocated memory
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}
	return (s);
}
