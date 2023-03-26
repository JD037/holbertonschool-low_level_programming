#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: the key to get the index for
 * @size: size of the hash table's array
 *
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val, index;

	/* Get the hash value */
	hash_val = hash_djb2(key);

	/* Compute the index using the hash value and size */
	index = hash_val % size;

	return (index);
}
