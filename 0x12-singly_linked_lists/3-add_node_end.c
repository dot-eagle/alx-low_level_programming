
#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head of the linked list
 * @str: to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp = *head;
	size_t new_par;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	new_par = 0;
	while (str[new_par])
	{
		new_par++;
	}
	new_node->len = new_par;

	return (new_node);
}

