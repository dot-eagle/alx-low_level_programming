#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer
 * @n: constant integer node store
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *m;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		m = *head;
		while (m->next != NULL)
		{
			m = m->next;
		}
		m->next = new_node;
	}
	new_node->next = NULL;
	new_node->n = n;

	return (new_node);
}
