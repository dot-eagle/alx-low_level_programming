#include "lists.h"


/**
 * free_listint -  frees a listint_t list
 * @head: pointer
 *
 * Return: freed list
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
