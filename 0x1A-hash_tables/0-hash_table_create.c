#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 * @size: size of the hash table
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtable;
	unsigned long int i;

	new_hashtable = malloc(sizeof(hash_table_t));
	if (new_hashtable == NULL)
		return (NULL);
	new_hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hashtable->array == NULL)
		return (NULL);
	new_hashtable->size = size;
	for (i = 0; i < size; i++)
		new_hashtable->array[i] = NULL;
	return (new_hashtable);
}
