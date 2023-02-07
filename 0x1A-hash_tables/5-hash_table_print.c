#include "hash_tables.h"


/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, x;
	hash_node_t *temp = NULL;

	i = 0;
	x = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];

		while (temp != NULL)
		{
			printf("'%s' : '%s', ", temp->key, temp->value);

			if (ht->array[i + 1] == NULL)
				break;

			printf(", ");
			temp = temp->next;
		} i++;
	}
	printf("}\n");
}
