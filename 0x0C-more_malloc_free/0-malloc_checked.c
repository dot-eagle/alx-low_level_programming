#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b:
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pack;

	pack = malloc(b);
	{
		if (pack == NULL || b == 0)
			exit(98);
	}
	return (pack);
}
