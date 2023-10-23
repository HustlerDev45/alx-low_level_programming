#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: pointer to the start of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		return (0);

	slow = head;
	fast = head;

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

	while (head)
	{
		printf("%d\n", head->n);
		nodes++;
		head = head->next;
	}

	return (nodes);
}
