
#include "lists.h"


/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer of pointer to head of the struct list
 * @n: constant integer data variable
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*
	 * const int n;
	 * dlistint_t *head;
	 * dlistint_t *new_Node;

	 * dlistint_t new_Node = (dlistint_t* ) malloc(sizeof(dlistint_t));
	 */

	dlistint_t *new_Node = malloc(sizeof(dlistint_t));

	if (new_Node)
	{
		new_Node->n = n;
		new_Node->prev = NULL;
		new_Node->next = (*head);

		if ((*head) != NULL)
			(*head)->prev = new_Node;
		(*head) = new_Node;
	}

	return (new_Node);

}

