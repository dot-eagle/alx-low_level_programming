#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list
 * @head: pointer head of list
 *
 * Return: sum of all data (n), else 0 if list empty
 */

int sum_listint(listint_t *head)
{
	int sum_n;

	sum_n = 0;
	while (head)
	{
		sum_n += head->n;
		head = head->next;
	}
	return (sum_n);
}
