#include "lists.h"

/**
 * sum_listint - sum of all data of a linked list
 * @head: head of the linked list
 * Return: Always sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
