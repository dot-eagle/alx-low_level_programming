#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to search
 * @c: char to
 *
 * Return: pointer to s else null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
			if (*s + c)
			{
				return (s);
			}
	}
	return (0);
}
