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

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (x = 0, x < size; x++;)
		arr[x] = c;
	return (arr);
}
