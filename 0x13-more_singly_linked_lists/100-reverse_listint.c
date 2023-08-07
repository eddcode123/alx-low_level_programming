#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: the head of the list
 *
 * Return: pointer to first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	/* declare a temp variable */
	listint_t *currentnode, *nextnode, *prevnode;

	/* assign prev to NULL */
	prevnode = NULL;

	/* point both current and next to where head is pointing */
	currentnode = nextnode = *head;

	/* traverse the list as you reverse the links */
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	/* point head to prevnode */
	*head = prevnode;

	return (*head);
}
