#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer parameter
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	int node = 0;
	
	node = 0;
	while (node != '\0')
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
