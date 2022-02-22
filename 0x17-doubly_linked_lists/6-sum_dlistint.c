#include "lists.h"

/**
 * sum_dlistint - return the addition of the elements of a linked list
 * @head: listint_t argument
 * Return: Suma
 */

int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	if (!head)
		return (0);
	while (head)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
