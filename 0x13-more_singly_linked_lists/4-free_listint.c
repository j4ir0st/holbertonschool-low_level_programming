#include "lists.h"

/**
 * free_listint - free the memory used by a linked list
 * @head: the head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);

		head = tmp;
	}
}
