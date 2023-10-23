#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: double pointer to the start of the list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 (Success), -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;

	return (1);
}
