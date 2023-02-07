#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to hash table
 * @ht: hash table to updatethe key/value pair to
 * @key: key of value; can not be an empty string
 * @value: val associated with key. must be duplicated
 *
 * Return: 1 as success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *temp_val = NULL;
	hash_node_t *temp = NULL;
	hash_node_t *new_node = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0 || key == NULL)
		return (0);
	temp_val = strdup(value);
	if (temp_val == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
		/*** we check for Collision ***/
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = temp_val;
			temp->value = strdup(value);
			free(temp_val);
			return (1);
		}
		temp = temp->next;
	}
	/*** insert new_node, if 'no collission' true ***/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = temp_val;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
