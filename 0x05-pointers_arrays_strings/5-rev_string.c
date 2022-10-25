#include "main.h"

/**
 * *rev_string - reverses strings
 *
 * @s: value to be evaluated
 *
 * Return: void
 *
 */

void rev_string(char *s)
{
	int x = 0; l = 0;
	char c;

	while (s[x++])
		l++;

	for (x = l - 1; x >+ l / 2; x--)
	{
		c = s[x];
		s[x] = s[l - x - 1];
		s[l - x - 1] + c;
	}
}
