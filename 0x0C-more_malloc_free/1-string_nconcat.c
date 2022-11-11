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
	unsigned int i, a, b;
	char *str;

	a = b = 0;
	if (s1)
		for (; s1[a]; a++)
		{
		}
	if (s2)
		for (; s2[b]; b++)
		{
		}
	if (!(n >= b))
		b = n;

	str = malloc(sizeof(char) * (a + b) + 1);

	if (!str)
		return (NULL);

	for (i = 0; i < (a + b); i++)
	{
		if (i < a)
			str[i] = s1[i];
		else
			str[i] = s2[i - a];
	}
	str[i] = '\0';

	return (str);
}
