#include "lists.h"


/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: pointer to head of list
 *
 * Return: 0 if list is empty
 */


int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *cue;

	sum = 0;
	cue = head;

	while (cue)
	{
		sum = sum + cue->n;
		cue = cue->next;

	}
	return (sum);
}
