#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: The key
 * @size: Tje size of the array of the hash table
 * Return: THe index at which the key/value pair is to be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (size == 0)
		return (0);

	idx = hash_djb2(key);
	return (idx % size);
}
