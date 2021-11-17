#include "lists.h"

/**
 * delete_nodeint_at_index - delete a given node
 * @head: head of the linked list
 * @index: node that will be deleted
 * Return: Always 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *tmp;
	unsigned int c = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0 && head != NULL)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
		return (1);
	}
	while (c < index)
	{
		if (curr->next == NULL)
		{
			return (-1);
		}
		tmp = curr;
		curr = curr->next;
		c++;
	}
	tmp->next = curr->next;
	free(curr);
	return (1);
}
