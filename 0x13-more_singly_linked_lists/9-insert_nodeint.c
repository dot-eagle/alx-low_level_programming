#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer head node
 * @idx: Index of list, starts at 0
 * @n: number of index
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ol_nod, *nw_nod;
	unsigned int q;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx)
	{
		ol_nod = *head;
		q = 0;
		while (q < idx - 1 && ol_nod)
		{
			ol_nod = ol_nod->next;
		} q++;

		if (!ol_nod)
			return (NULL);
	}
	nw_nod = (listint_t *)malloc(sizeof(listint_t));

	if (nw_nod == NULL)
		return (NULL);

	nw_nod->n = n;

	if (idx == 0)
	{
		nw_nod->next = *head;
		*head = nw_nod;
		return (nw_nod);
	}
	nw_nod->next = ol_nod->next;
	ol_nod->next = nw_nod;
	return (nw_nod);
}
