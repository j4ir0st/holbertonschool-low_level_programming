#include "hash_tables.h"

/**
 * key_index - check the code
 * @key: key of the node
 * @size: size of the hash table
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash;

	hash = hash_djb2(key);
	idx = hash % size;
	return (idx);
}
