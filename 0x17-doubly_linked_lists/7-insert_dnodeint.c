#include "lists.h"


/**
 * nsert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: double pointer to head of list
 * @idx: index of the list where the new node should be added; starts at 0
 * @n: data value at new node numbering
 *
 * Return: address of the new node, or NULL if it failed
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *cur;
	size_t a;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		if (idx == 0 || h == NULL)
		{
			add_dnodeint(h, n);

		}
		else
		{
			cur = *h;
			while ((cur != NULL) && (a + 1 < idx))
			{
				cur = cur->next;
				a++;
			}
			if (a + 1 == idx)
			{
				if (cur == NULL)
				{
					add_dnodeint_end(h, n);
				}
				else
				{
					new->prev = cur;
					new->next = cur->next;
					cur->next = new;
					new->next->prev = new;

				}
			}
		}
	}
	return (new);
}

