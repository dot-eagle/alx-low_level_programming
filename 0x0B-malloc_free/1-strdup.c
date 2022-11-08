#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: copy of the string given as a parameter
 *
 * Return: NULL if str = NULL or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int size, f;
	char *k;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (*(str + size) != '\0')
		size++;
	size++;
	k = malloc(size * sizeof(*k));
	if (k == NULL)
		return (NULL);

	f = 0;
	while (*(str + f))
	{
		*(k + f) = *(str + f);
		f++;
	}
	*(k + f) = '\0';

	return (k);
}
