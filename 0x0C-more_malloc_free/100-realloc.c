#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: he new size, in bytes of the new memory block
 *
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* allocating new dynamic memory without initialization */
	if (new_size > old_size)
	{
		free(ptr);
		ptr = (int *) malloc(new_size);

		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}
	/* An equivalent to malloc(new_size)*/
	if (ptr == NULL)
	{
		return (ptr = (int *) malloc(new_size));

		if  (ptr == NULL)
			return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	/* utilising free() to free ptr */
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
