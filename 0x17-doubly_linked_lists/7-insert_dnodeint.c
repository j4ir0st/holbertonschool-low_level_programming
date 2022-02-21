#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at n position of a linked list
 * @h: head of a linked list
 * @idx: where the node will be added
 * @n: content of the new node
 * Return: Adress of the new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h;
	unsigned int c = 0;

	while (c < idx)
	{
		if (t->next == NULL)
		{
			return (NULL);
		}
		t = t->next;
		c++;
	}
	if (idx == 0)
	{
		return (add_dnodeint(&t, n));
	}
	return (add_dnodeint(&t, n));
}
