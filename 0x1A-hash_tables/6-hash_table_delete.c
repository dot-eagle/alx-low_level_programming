#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 *
 * Return: void, nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int x;
	hash_node_t *list;

	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			list = ht->array[x]->next;
			free(ht->array[x]->value);
			free(ht->array[x]->key);
			free(ht->array[x]);
			ht->array[x] = list;
		}
	}
	free(ht->array);
	free(ht);
}
