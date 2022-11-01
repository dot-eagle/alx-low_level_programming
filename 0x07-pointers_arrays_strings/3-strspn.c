#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search
 * @accept: bytes in which to search for
 *
 * Return: n bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, y;

	n = 0;
	while (*s)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(accept + y) == *s)
				break;
		}
		if (*(accept + y) == '\0')
			n++;
		else
			break;
		s++;
	}
	return (n);
}
