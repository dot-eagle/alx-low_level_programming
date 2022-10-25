#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string pointer
 *
 * Return: length.
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;

	return (l);
}
