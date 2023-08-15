#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly list.
 * @head: head of the list.
 * @n: value to store to newnode.
 *
 * Return: address of newnode
 * or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declare new node and variables to use */
	dlistint_t *newnode;
	dlistint_t *prev;

	/* allocate memory to newnode */
	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	/* check if malloc failed */
	if (newnode == NULL)
		return (NULL);
	/* add value to node */
	newnode->n = n;

	/* check if list is empty */
	if (*head == NULL)
	{
		newnode->next = NULL;
	}
	else
	{
		/* if list is not empty point newnode->next to head */
		newnode->next = *head;
		/* go to newnodenext and point prev to newnode */
		prev = newnode->next;
		prev->prev = newnode;
		newnode->prev = NULL;
	}
	/* point head to newnode */
	*head = newnode;

	return (*head);
}
