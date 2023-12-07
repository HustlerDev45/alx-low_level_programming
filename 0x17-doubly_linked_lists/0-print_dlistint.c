#include "lists.h"

/**
 * print_dlistint - Print all the elements of dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t count = 0;

	node = h;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}

	return (count);
}
