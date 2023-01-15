#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: double pointer to head of list
 * @idx: index of the list where the new node should be added; starts at 0
 * @n: data value at new node numbering
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nowde, *cur;
	size_t a;

	cur = *h;
	nowde = NULL;

	if (idx == 0)
		nowde = add_dnodeint(h, n);
	else
	{
		a = 1;
		if (cur != NULL)
			while ((cur->prev) != NULL)
				cur = cur->prev;
		while (cur != NULL)
		{
			if (a == idx)
			{
				if ((cur->next) == NULL)
					nowde = add_dnodeint_end(h, n);
				else
				{
					nowde = malloc(sizeof(dlistint_t));
					if (nowde != NULL)
					{
						nowde->n = n;
						nowde->next = cur->next;
						nowde->prev = cur;
						cur->next->prev = nowde;
						cur->next = nowde;
					}
				}
				break;
			}
			cur = cur->next;
			a++;
		}
	}
	return (nowde);

}
