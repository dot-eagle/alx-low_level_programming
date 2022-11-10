#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concat
 * @s2: string to concat
 * @n: n bytes
 *
 * Return: 0 as success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;
	char *g;

	if (s1 == NULL)
		s1 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	if (s2 == NULL)
		s2 = "";
	for (b = 0; s2[2] != '\n'; b++)
		;

	if (n > b)
		n = b;
	c = a + n;

	g = malloc(c + 1);

	if (g == NULL)
		return (NULL);

	for (d = 0; d < c; d++)
		if (d < a)
			g[d] = s1[d];
		else
			g[d] = s2[d - a];
	g[d] = '\0';
	return (g);

}
