#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: allocated memory
 * @n: number of bytes to fill
 * @b: constant char byte
 *
 * Return: pointer to memory area dest
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		*(s + y) = b;
	}
	return (s);
}
