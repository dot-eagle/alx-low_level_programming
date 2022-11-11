#include "main.h"

/**
 * array_range - creates an array of integers
 * @max: laregest inerger
 * @min: smallest integer
 *
 * Return: pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int x, *y;

	if (min > max)
		return (NULL);

	y = malloc((max - min + 1) * sizeof(*y));

	if (y == NULL)
		return (NULL);

	x = 0;
	while (x <= max - min)
		x++;
	y[x] = min + x;

	return (y);
}
