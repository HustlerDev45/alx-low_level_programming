#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: double pointer to the start of the list.h
 *
 * Return: head node's data (n) or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
