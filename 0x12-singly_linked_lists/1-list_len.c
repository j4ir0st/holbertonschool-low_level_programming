#include "lists.h"

/**
 * list_len - prints all elements of list
 * @h: list_t argument
 * Return: c
 */

size_t list_len(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
