#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: poi
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *dir = NULL;
	size_t count = 0;

	dir = h;
	if (dir == NULL)
		return (0);
	while (dir != NULL)
	{
		printf("%d\n", dir->n);
		count++;
		dir = dir->next;
	}
	return (count);
}
