#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: doubly linked list
 * Return: number of elements of the doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int c = 0;

	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		c++;
	}
	return (c);
}
