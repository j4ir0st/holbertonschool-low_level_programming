#include "lists.h"

/**
 * free_listint2 - frees the linked list and sets the head to NULL
 * @head: the head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
