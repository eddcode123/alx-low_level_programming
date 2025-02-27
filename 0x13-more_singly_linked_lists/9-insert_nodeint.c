#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: pointer to first node.
 * @idx: index to insert node
 * @n: data to populate node.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	size_t count;
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));

	/* check if malloc failed */
	if (!node)
	{
		return (node);
	}

	node->n = n;

	if (idx == 0 && temp)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	/* traverse and insert at index */
	for (count = 0; count < idx - 1 && temp != NULL; count++)
	{
		temp = temp->next;
	}

	/* insert if temp value is not NULL */
	if (temp)
	{
		node->next = temp->next;
		temp->next = node;
		return (node);
	}

	free(node);

	return (NULL);
}
