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

	g = u = 0;

	if (s1 != NULL)
		for (g = 0; s1[g]; g++)
		{
		}
	if (s2 != NULL)
		for (u = 0; s2[u]; u++)
		{
		}

	pst = malloc(sizeof(char) * (g + u + 1));

	if (pst == NULL)
		return (NULL);

	t = 0;
	while (t < (g + u))
	{
		if (t < g)
			pst[t] = s1[t];
		else
			pst[t] = s2[t - g];
		t++;
	}
	pst[t] = 0;

	return (pst);
}
