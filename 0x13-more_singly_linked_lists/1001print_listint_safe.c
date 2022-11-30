#include "lists.h"

int lista_safer(const listint_t *head, ...);

/**
 * lista_safer - list recursively
 * @head: pointer head of newlist
 * @outta: pointer to node on list
 *
 * Return: no of nodes
 */

int lista_safer(const listint_t *head, listint_t *outta)
{
	listint_t nw_nod, *ol_nod;

	if (head->next == NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		return (1);
	}
	nw_nod.next = outta;
	nw_nod.n = head;
	ol_nod = nw_nod.next;

	while (ol_nod != NULL && ol_nod->n != head)
	{
		ol_nod = ol_nod->next;
	}
	if (ol_nod != NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (0);
	}
	printf("[%p] %d\n", (void *)head, head->n);

	return (1 + lista_safer(head->next, &nw_nod));
}


/**
 * print_listint_safe - prints a listint_t linked list
 * @head: ppointer to head node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}
	return (lista_safer(head, NULL));
}
