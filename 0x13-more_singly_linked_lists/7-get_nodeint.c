#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the list
 * @index: is the nth index to return
 *
 * Return: nth index
 * or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count;

	/* traverse list and return the nth node */
	for (count = 0; count < index && temp != NULL; count++)
	{
		temp = temp->next;
	}

	return (temp);
}
