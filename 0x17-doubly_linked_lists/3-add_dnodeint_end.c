
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
	/*
	 * const int n;
	 * dlistint_t *head;
	 * dlistint_t *new_Node;

	 * dlistint_t new_Node = (dlistint_t* ) malloc(sizeof(dlistint_t));
	 */

	if ((*head) == NULL)
		return (NULL);

	new_Node = malloc(sizeof(dlistint_t));

	if (new_Node)
	{
		new_Node->n = n;
		new_Node->next = NULL;
		new_Node->prev = NULL;
		if (*head == NULL)
		{
			*head = new_Node;
		}
		else
		{
			len = *head;
			while ((len->next) != NULL)
				(*head) = (*head)->next;
			(*head)->next = new_Node;
			new_Node->prev = len;
		}
	}
	return (new_Node);

}

