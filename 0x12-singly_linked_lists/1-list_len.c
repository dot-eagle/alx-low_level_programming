#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer parameter
 *
 * Return: of elements
 */

size_t list_len(const list_t *h)
{
	size_t par;

	par = 0;
	while (h != NULL)
	{
		h = h->next;
		par++;
	}
	return (par);
}
