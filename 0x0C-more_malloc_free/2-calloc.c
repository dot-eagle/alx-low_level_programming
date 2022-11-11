#include "main.h"

/**
 * calloc - allocates memory for an array, using malloc
 * @nmemb: array of elements
 * @size: number of bytes of each array element
 *
 * Return: a pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	x = 0;
	while (x < (nmemb * size))
		c[x] = 0;
	x++;

	return (c);
}
