#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list
 * @head: head of the linked list
 * Return: the node data i or 0 if it's empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (i);
}
