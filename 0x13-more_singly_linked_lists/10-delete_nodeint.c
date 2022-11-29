#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @index: starts at 0, index of the node that should be deleted
 * @head: double papra
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int b;
	listint_t *del_nod, *tmp_nod;

	del_nod = *head;
	if (del_nod == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(del_nod);
		return (1);
	}

	for (b = 0; b < (index - 1); b++)
	{
		if (del_nod->next == NULL)
		{
			return (-1);
		}
		del_nod = del_nod->next;
	}

	tmp_nod = del_nod->next;
	del_nod->next = tmp_nod->next;

	free(tmp_nod);
	return (1);
}
