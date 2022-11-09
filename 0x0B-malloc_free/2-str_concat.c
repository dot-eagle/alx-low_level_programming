#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: input string parameter
 * @s2: input string
 *
 * Return: NULL else pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *pst;
	int g, u, t;

	t = 0;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (g = 0; g <= *s1; g++)
	{
	}

	for (u = 0; u <= *s2; u++)
	{
	}

	pst = malloc(sizeof(char) * (g + u + 1));

	if (pst == NULL)
		return (NULL);

	while (*s1)
	{
		pst[t] = *s1;
		t++;
		s1++;
	}
	while (*s2)
	{
		pst[t] = *s2;
		t++;
		s2++;
	}
	return (pst);
}
