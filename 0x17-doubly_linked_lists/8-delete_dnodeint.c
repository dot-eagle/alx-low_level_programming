#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of doubly linked list
 * @index: index of the node that should be deleted. Index starts at 0
 * @head: double pointer to head of list
 *
 * Return: 1 if successfull else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int d;

	dlistint_t *cur;

	cur = *head;

	d = 0;

	while ((cur->next != NULL) && (d < index))
	{
		cur = cur->next;
		d++;
	}
	if (cur)
	{
		if (cur->prev)
			cur->prev->next = cur->next;
		if (cur->next)
			cur->next->prev = cur->prev;
		free(cur);
		return (1);

	}
	return (-1);
}

