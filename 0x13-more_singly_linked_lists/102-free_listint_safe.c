#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - safely frees a listint_t list.
 * @h: double pointer to the start of the list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *slow, *fast, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("Circular linked list detected. Exiting...\n");
			exit(98);
		}
	}

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		nodes++;
	}

	*h = NULL;

	return nodes;
}
