#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 *
 * @head: double pointer head of list
 *
 * Returns: head node’s data else 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ol_head;
	int n_data;

	if (*head == NULL)
	{
		return (0);
	}

	ol_head = *head;
	*head = ol_head->next;
	n_data = ol_head->n;
	free(ol_head);
	return (n_data);
}
