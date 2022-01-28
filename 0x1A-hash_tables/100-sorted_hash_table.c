#include "hash_tables.h"

/**
 * shash_table_create - check the code for
 * @size: size of the hash table
 * Return: Always EXIT_SUCCESS.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hashtable = NULL;
	unsigned long int i = 0;

	new_hashtable = malloc(sizeof(shash_table_t));
	if (new_hashtable == NULL)
		return (NULL);
	new_hashtable->array = malloc(sizeof(shash_node_t *) * size);
	if (new_hashtable->array == NULL)
		return (NULL);
	new_hashtable->size = size;
	new_hashtable->shead = NULL;
	new_hashtable->stail = NULL;
	for (i = 0; i < size; i++)
		new_hashtable->array[i] = NULL;
	return (new_hashtable);
}

/**
 * shash_table_set - check the code
 * @ht: pointer of the hash table
 * @key: pointer of the key
 * @value: value of the key
 * Return: Always EXIT_SUCCESS.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx;
	shash_node_t *new_entry, *tmp;

	if (strcmp(key, "") == 0 || ht == NULL || key == NULL || value == NULL)
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

shash_node_t *set_node(const char *key, const char *value)
{
	shash_node_t *new_entry;

	new_entry = malloc(sizeof(shash_node_t *));
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

/**
 * shash_table_get - check the code
 * @ht: pointer of the hash table
 * @key: pointer of the key
 * Return: Always EXIT_SUCCESS.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
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

/**
 * hash_table_print - check the code
 * @ht: pointer of the hash table
 * Return: Always EXIT_SUCCESS.
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *tmp = NULL;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}

	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a hash table in reverse.
 * @ht: Is the hash table
 *
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	char flag = 0;

	if (ht == NULL)
		return;

	tmp = ht->stail;
	printf("{");
	while (tmp)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: Is the hash table
 *
 * Return: Nothing.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
