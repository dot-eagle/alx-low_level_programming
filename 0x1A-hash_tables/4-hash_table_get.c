#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value by key
 * @ht: hash table to search
 * @key: key you are to look for
 *
 * Return: associated value of element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	index = 0;

	if (key == NULL)
	{
		return (NULL);
	}

	if (ht != NULL)
	{
		index = key_index((const unsigned char *)key, ht->size);
		temp = ht->array[index];

		/*** search for a key and return value if available ***/
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				return (temp->value);
			}
			temp = temp->next;
		}
	}
	return (NULL);
}
