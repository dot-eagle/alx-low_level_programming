#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: parameter
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return(-1);
	}
	index = 0;
	while (index < size)
	{
		if ((*cmp)(array[index]) != 0)
		{
			return (index);
		}
		index++;

	}
	return (-1);
}
