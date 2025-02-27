#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index.
 * @head: pointer to the first node.
 * @index: position of the node to delete.
 *
 * Return: 1 if successful, or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *deleted;
	unsigned int count;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0) /* Delete the head node */
	{
		deleted = *head;
		*head = (*head)->next;
		free(deleted);
		return (1);
	}

	/* Traverse the list to find the node before the target index */
	for (count = 0; count < index - 1; count++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	/* Delete the node */
	deleted = temp->next;
	if (deleted == NULL)
	{
		return (-1);
	}

	temp->next = deleted->next;
	free(deleted);
	return (1);
}
