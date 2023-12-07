#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in dlistint_t.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t count = 0;

	node = h;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}

	return (count);
}
