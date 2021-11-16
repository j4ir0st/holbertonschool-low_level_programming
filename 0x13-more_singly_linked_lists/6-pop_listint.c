#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list
 * @head: head of the linked list
 * Return: the node data i
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (i);
}
