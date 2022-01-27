#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtable;

	new_hashtable = malloc(sizeof(hash_table_t));
	if (new_hashtable == NULL)
		return (NULL);
	new_hashtable->array = malloc(sizeof(hash_node_t*) * size);
	if (new_hashtable->array == NULL)
		return (NULL);
	return (new_hashtable);
}
