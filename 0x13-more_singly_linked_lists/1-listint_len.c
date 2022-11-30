#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h:  para
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *dir = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (dir != NULL)
	{
		count++;
		dir = dir->next;
	}
	return (count);
}
