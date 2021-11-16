#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at n position of a linked list
 * @head: head of a linked list
 * @idx: where the node will be added
 * @n: content of the new node
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int c = 1;

	tmp = *head;
	while (c < idx)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
		c++;
	}
	new = malloc(sizeof(listint_t));
	new->next = tmp->next;
	new->n = n;
	tmp->next = new;
	return (tmp);
}
