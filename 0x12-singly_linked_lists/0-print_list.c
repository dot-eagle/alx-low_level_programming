#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer parameter
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	int h;

	h = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		h++;
	}
	return (h);
}
