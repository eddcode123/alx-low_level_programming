#include "lists.h"

/**
 * add_dnodeint_end - add node ata end of doubly linked list.
 * @head: head of list.
 * @n: value to add to the created node.
 *
 * Return: address of new element
 * or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* declare newnode and valiables to use */
	dlistint_t *newnode;
	dlistint_t *temp;

	/* allocate memory to newnode */
	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	/* check for malloc error */
	if (newnode == NULL)
		return (NULL);
	/* add value to newnode */
	newnode->n = n;

	/* point temp where head is pointing */
	temp = *head;

	/* check if list empty */
	if (temp == NULL)
		*head = newnode;
	else
	{
		while (temp->next != NULL)
		{
			/* update temp to go to next node */
			temp = temp->next;
		}
		/* link temp->next to newnode */
		temp->next = newnode;
		/* point newnode->prev to temp */
		newnode->prev = temp;
	}
	/* make newnode->next NULL */
	newnode->next = NULL;

	return (*head);
}
