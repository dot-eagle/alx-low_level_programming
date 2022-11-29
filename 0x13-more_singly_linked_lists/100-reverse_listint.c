#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double po
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *lead, *outta;

	lead = *head;
	outta = NULL;

	if (!head || !*head)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		*head = lead->next;
		lead->next = outta;
		outta = lead;
		lead = *head;
	}
	*head = outta;
	return (*head);
}
