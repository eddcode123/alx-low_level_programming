#include "lists.h"

/**
 * pop_listint -  pops the head node of a linked list.
 * @head: pointer to the first node of list
 *
 * Return: data of the poped node
 * or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int popped;
	
	/* edge case where list is empty */
	if (head == NULL)
	{
		return (0);
	}

	/* delete the node and return its data */
	temp = (*head)->next;
	popped = (*head)->n;
	free(*head);

	/* point head to temp */
	*head = temp;

	return (popped);
}
