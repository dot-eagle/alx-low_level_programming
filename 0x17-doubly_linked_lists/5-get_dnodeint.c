
#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node or NULL node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t* cur;
	unsigned int e;

	cur = head;
	e = 0;

	while (cur != NULL && (e < index))
	{
		cur = cur->next;
		e++;
	}
	return (cur);
}
