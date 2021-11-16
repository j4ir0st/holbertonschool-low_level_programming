#include "lists.h"

/**
 * get_nodeint_at_index - return the n node of a linked list
 * @head: head of the linked list
 * @index: number of n node
 * Return: Always head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
