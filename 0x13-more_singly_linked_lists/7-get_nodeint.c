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
	/* declare variable to iterate through list */
	size_t i;

	/* use a loop to traverse the list */
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
