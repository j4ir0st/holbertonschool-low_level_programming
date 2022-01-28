#include "hash_tables.h"

/**
 * hash_table_get - check the code
 * @ht: pointer of the hash table
 * @key: pointer of the key
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
