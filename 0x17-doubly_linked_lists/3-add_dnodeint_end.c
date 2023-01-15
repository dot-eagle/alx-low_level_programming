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
	dlistint_t *cur;
	dlistint_t *new_Node;

	cur = *head;
	new_Node = malloc(sizeof(dlistint_t));

	new_Node->n = n;
	new_Node->next = NULL;

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;

	if (cur != NULL)
	{
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new_Node;
	}
	else
	{
		cur = new_Node;
	}
	new_Node->prev = cur;

	return (new_Node);


}
