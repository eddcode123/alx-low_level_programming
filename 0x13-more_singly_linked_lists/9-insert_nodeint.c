#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the list
 * @idx: index to insert newnode
 * @n: value to add to newnode
 *
 * Return: address of newnode
 * or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* declare newnode */
	listint_t *newnode;
	listint_t *prevnode;
	/* declare a vaariable to get index */
	size_t i;

	/* allocate memory to newnode */
	newnode = (listint_t *) malloc(sizeof(listint_t));

	/* check if malloc failed */
	if (newnode == NULL)
		return (NULL);
	/* insert value to new node */
	newnode->n = n;

	/* point temp where head is pointing */
	prevnode = *head;
	/* check if index is 0 */
	if (idx == 0)
	{
		/* assign head to newnode->next */
		newnode->next = *head;
		/* point head to newnode */
		*head = newnode;
	}
	/* if list is not empty add newnode at index */
	for (i = 0; prevnode != NULL && i < idx - 1; i++)
		prevnode = prevnode->next;
	if (prevnode == NULL)
		return (NULL);
	newnode->next = prevnode->next;
	prevnode->next = newnode;

	return (newnode);
}
