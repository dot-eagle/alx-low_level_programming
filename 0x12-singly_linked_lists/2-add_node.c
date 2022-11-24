#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer
 * @str: char needs to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t new_par = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = (*head);
	}
	*head = new_node;

	new_node->str = strdup(str);
	
	for (new_par = 0; str[new_par] != '\0'; new_par++)
	{
		new_node->len = new_par;
	}
	return (new_node);
}
