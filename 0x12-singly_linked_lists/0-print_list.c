#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer parameter
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] %p\n", h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
