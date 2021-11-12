#include "lists.h"

/**
 * add_node_end - adds a node at the\
 end of list
 * @head: list_t argument
 * @str: char pointer argument
 * Return: adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
