#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum (Success), otherwise return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
