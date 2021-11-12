#include "list.h"

/**
 * print_list - prints all elements of list
 * @h: list_t argument
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->str, h->len);
		}
		h = h->next;
		c++;
	}

	return (c);
}
