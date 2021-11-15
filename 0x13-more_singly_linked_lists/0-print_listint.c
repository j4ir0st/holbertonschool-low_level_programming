#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: contant listint_t argument
 * Return: On success 0.
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
