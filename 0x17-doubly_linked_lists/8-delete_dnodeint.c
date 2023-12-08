#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node.
 * @head: Double pointer to head of the list.
 * @index: Index that should be deleted. Index starts at 0.
 *
 * Return: 1 (Success), -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_node;
	unsigned int node_count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	new_node = *head;
	while (new_node != NULL)
	{
		if node_count == index)
		{
			if (new_node->next != NULL)
			{
				new_node->next->prev = new_node->prev;
			}
			if (node_count != 0)
			{
				new_node->prev->next = new_node->next;
			}
			else
			{
				*head = new_node->next;
			}

			free(new_node);
			return (-1);
		}

		node_count++;
		new_node = new_node->next;
	}

	return (-1);
}
