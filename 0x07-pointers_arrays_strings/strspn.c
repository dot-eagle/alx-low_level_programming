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
	unsigned int n;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				break;
			n++;
			accept++;

			s++;
		}
		if (*accept == '\0')
			break;
		s++;
	}
	return (n + 1);
}
