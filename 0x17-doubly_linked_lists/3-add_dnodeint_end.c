
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer of pointer to head of the struct list
 * @n: constant integer data variable
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *len;
	dlistint_t *new_Node;

	len = *head;
	new_Node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;
	new_Node->prev = len;

	if (len == NULL)
	{
		*head = new_Node;
	}
	else
	{
		len = *head;
		while ((len->next) != NULL)
		{
			len = len->next;
		}
		len->next = new_Node;
		new_Node->prev = len;
	}
	return (new_Node);
}
