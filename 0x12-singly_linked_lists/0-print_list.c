#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer parameter
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	int y;

	y = 0;
	while (y != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		y++;
	}
	return (y);
}
