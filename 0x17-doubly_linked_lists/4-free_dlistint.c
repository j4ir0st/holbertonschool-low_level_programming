#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the double linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->n);
		free(head);
		head = tmp;
	}
}
