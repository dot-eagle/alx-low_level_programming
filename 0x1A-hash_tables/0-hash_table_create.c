
#include "hash_tables.h"

/**
 * hash_table_create -Function that creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to the new Hash table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	new_ht = malloc(sizeof(hash_table_t));

	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = calloc(size, sizeof(hash_node_t *));

	if (new_ht->array == NULL)
	{
		free(new_ht);

		return (NULL);
	}
	return (new_ht);
}
