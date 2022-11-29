#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @index: index of the node, starting at 0
 * @head: pointer to headnode
 *
 * Return: the nth node of a listint_t, else 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_nod;
	unsigned int k;

	temp_nod = head;
	k = 0;
	while (k < index)
	{
		if (temp_nod->next == NULL)
		{
			return (NULL);
		}
		k++;
		temp_nod = temp_nod->next;
	}
	return (temp_nod);
}
