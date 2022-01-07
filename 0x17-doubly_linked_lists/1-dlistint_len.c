#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: head of the linked list
 * Return: number of elemnts of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int c = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		c++;
	}
	return (c);
}
