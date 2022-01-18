#include "lists.h"

/**
 * add_dnodeint - Prints the enviroment
 * @head: pointer of structure
 * @n: value of the new node
 * Return: The address of the new node or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_st = NULL;

	new_st = malloc(sizeof(dlistint_t));
	if (!new_st)
		return (NULL);

	if (*head)
	{
		(*head)->prev = new_st;
	}
	new_st->n = n;
	new_st->next = *head;
	new_st->prev = NULL;
	*head = new_st;
	return (new_st);
}
