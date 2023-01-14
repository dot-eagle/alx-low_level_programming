
#include "lists.h"


/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to ead of given list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tempr = head;
		head = head->next;
		head = head->prev;
		free(tempr);

	}
	free(head);
}

