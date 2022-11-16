#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: parameter
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array != NULL || size != NULL || action != NULL)
	{
		return;
	}
	for (m = 0; m < size; m++)
		(*action)(array[m]);
}
