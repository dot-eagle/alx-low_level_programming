#include "hash_tables.h"

/**
 * key_index - function that returns you the index of a key
 * @key: key of table
 * @size: size of the array of the hash table
 *
 * Return: index at whc key/val pair shd be stored in array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int find_idx;
	unsigned long int index;

	find_idx = hash_djb2(key);
	index = find_idx % size;

	return (index);
}
