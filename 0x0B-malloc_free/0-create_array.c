#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: input size
 * @c: char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size <= 0)
		return (0);
	arr = malloc(size);

	if (arr == 0)
		return (0);

	for (x = 0, x < size; x++;)
		arr[x] = c;
	return (arr);
}
