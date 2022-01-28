#include "hash_tables.h"

/**
 * hash_table_set - check the code
 * @ht: pointer of the hash table
 * @key: pointer of the key
 * @value: value of the key
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx;
	hash_node_t *new_entry, *tmp;

	if (strcmp(key, "") == 0 || ht == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	new_entry = ht->array[idx];
	if (new_entry == NULL)
	{
		ht->array[idx] = set_node(key, value);
		if (ht->array[idx] == NULL)
			return (0);
		return (1);
	}
	tmp = new_entry;
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = malloc(strlen(value) + 1);
			if (tmp->value == NULL)
				return (0);
			strcpy(tmp->value, value);
			return (1);
		}
		tmp = tmp->next;
	}
	ht->array[idx] = set_node(key, value);
	if (ht->array[idx] == NULL)
		return (0);
	ht->array[idx]->next = new_entry;
	return (1);
}

/**
 * set_node - check the code
 * @key: pointer of the key
 * @value: value of the key
 * Return: Always EXIT_SUCCESS.
 */

hash_node_t *set_node(const char *key, const char *value)
{
	hash_node_t *new_entry;

	new_entry = malloc(sizeof(hash_node_t *));
	if (new_entry == NULL)
		return (NULL);
	new_entry->key = malloc(strlen(key) + 1);
	if (new_entry->key == NULL)
		return (NULL);
	new_entry->value = malloc(strlen(value) + 1);
	if (new_entry->value == NULL)
		return (NULL);
	strcpy(new_entry->key, key);
	strcpy(new_entry->value, value);
	new_entry->next = NULL;
	return (new_entry);
}
