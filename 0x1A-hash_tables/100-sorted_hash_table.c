#include "hash_tables.h"

/**
<<<<<<< HEAD
 * shash_table_create - Creates a hash table.
 * @size: Is the size of the array
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash = NULL;
	unsigned long int c = 0;

	new_hash = malloc(sizeof(shash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;
	new_hash->array = malloc(sizeof(shash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	new_hash->shead = NULL;
	new_hash->stail = NULL;
	for (c = 0; c < size; c++)
		new_hash->array[c] = NULL;
	return (new_hash);
}

/**
 * shash_table_set - Adds an element to the hash table
 * @ht: Is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: Is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *hash_node = NULL;
	shash_node_t *new_node = NULL;
	char *new_key = NULL;
	char *new_value = NULL;
	unsigned long int hash_idx;

	if (!key || !ht || !value)
		return (0);
	hash_idx = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[hash_idx];
	new_value = strdup(value);
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			free(hash_node->value);
			hash_node->value = new_value;
			return (1);
		}
		hash_node = hash_node->next;
	}
	new_key = strdup(key);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = new_value;
	new_node->key = new_key;
	new_node->next = ht->array[hash_idx];
	ht->array[hash_idx] = new_node;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	sort_check(ht, new_node);
=======
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
>>>>>>> 7096224fe1dd6fb8d67f9fb48f1af842536416ea
	return (1);
}

/**
<<<<<<< HEAD
 * sort_check - Adds an element to the hash table
 * @ht: Is the hash table you want to add or update the key/value to
 * @node: node to vincule
 *
 * Return: Nothing
 */
void sort_check(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current = NULL, *tmp = NULL;

	if (!(ht->shead) || strcmp(node->key, ht->shead->key) <= 0)
	{
		node->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = node;
		if (!(ht->stail))
			ht->stail = node;
		ht->shead = node;
		return;
	}

	current = ht->shead;
	tmp = ht->shead->snext;
	while ((tmp) && strcmp(node->key, tmp->key) > 0)
	{
		current = current->snext;
		tmp = tmp->snext;
	}
	current->snext = node;
	node->snext = tmp;
	node->sprev = current;
	if (tmp)
		tmp->sprev = node;
	else
		ht->stail = node;
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: Is the hash table you want to look into
 * @key: Is the key you are looking for
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned int idx = 0;
	shash_node_t *tmp = NULL;

	if (!ht || key == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
=======
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
>>>>>>> 7096224fe1dd6fb8d67f9fb48f1af842536416ea
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
<<<<<<< HEAD
 * shash_table_print - Prints a hash table.
 * @ht: Is the hash table
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	char flag = 0;

	if (!ht || !(ht->array))
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		flag = 1;
=======
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

>>>>>>> 7096224fe1dd6fb8d67f9fb48f1af842536416ea
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a hash table in reverse.
 * @ht: Is the hash table
 *
 * Return: Nothing
 */
<<<<<<< HEAD
=======

>>>>>>> 7096224fe1dd6fb8d67f9fb48f1af842536416ea
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	char flag = 0;

<<<<<<< HEAD
	if (!ht || !(ht->array))
=======
	if (ht == NULL)
>>>>>>> 7096224fe1dd6fb8d67f9fb48f1af842536416ea
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
<<<<<<< HEAD
=======

>>>>>>> 7096224fe1dd6fb8d67f9fb48f1af842536416ea
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
