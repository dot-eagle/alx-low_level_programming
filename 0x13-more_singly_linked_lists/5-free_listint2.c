#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer
 *
 * Returns: void
 */

void free_listint2(listint_t **head)
{
	listint_t *free_nodes = NULL;

	while (*head != NULL)
	{
		free_nodes = *head;
		*head = (*head)->next;
		free(free_nodes);
	}
	*head = NULL;


	if (head == NULL)
	{
		return;
	}
}
