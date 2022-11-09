#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int args count
 * @av: char args vector
 *
 * Return: a pointer to a new string, else NULL
 */

char *argstostr(int ac, char **av)
{
	int i, n, k = 0, len = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			p[k] = av[i][n];
			k++;
		}
		if (p[k] == '\0')
			p[k++] = '\n';
	}
	return (p);
}
