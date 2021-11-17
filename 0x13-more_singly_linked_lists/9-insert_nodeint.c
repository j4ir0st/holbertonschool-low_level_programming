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
	listint_t *curr = *head, *tmp, *new;
	unsigned int c = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (c < idx)
	{
		if (curr->next == NULL)
		{
			curr->next = new;
			new->next = NULL;
			return (new);
		}
		tmp = curr;
		curr = curr->next;
		c++;
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	new->next = curr;
	tmp->next = new;
	return (new);
}
