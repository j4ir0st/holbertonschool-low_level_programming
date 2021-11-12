#include "lists.h"

/**
 * add_node - adds a node at the beginning of list
 * @head: list_t argument
 * @str: char pointer argument
 * Return: adress
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
