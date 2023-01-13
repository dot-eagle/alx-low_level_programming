#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: The head of the given list.
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmpr = h;	/* Initialize a temporary node */
	size_t Nodes_count = 0;		/* Initialize count */

	while (tmpr != NULL)
	{
		/* Nodes_count++; */
		/*  printf("%d\n", tmpr->n);  */
		tmpr = tmpr->next;	/*tmpr will point to the next node*/

		Nodes_count++;
	}

	return (Nodes_count);
}

/*
 * tmpr is a reference for head pointer, h.
 * condition is: while temp diferent from NULL
 * if temp is null, it means it is in the last node.
 * till the node becomes null, printing each nodes data
 */
