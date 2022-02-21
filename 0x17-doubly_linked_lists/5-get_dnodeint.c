#include "lists.h"

/**
 * get_dnodeint_at_index - return the n node of a doubly linked list
 * @head: head of the linked list
 * @index: number of n node
 * Return: Always head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (c < index)
	{
		if (head->next == NULL || head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		c++;
	}
	return (head);
}
