#include "lists.h"

/**
 * listint_len - return the number of elements of a linked list
 * @h: listint_t argument
 * Return: Always c.
 */

size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
