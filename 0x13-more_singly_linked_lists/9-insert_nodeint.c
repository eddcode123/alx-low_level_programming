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
	listint_t *temp;
	/* declare a vaariable to get index */
	size_t i = 0;

	/* allocate memory to newnode */
	newnode = (listint_t *) malloc(sizeof(listint_t));

	/* check if malloc failed */
	if (newnode == NULL)
		return (NULL);
	/* insert value to new node */
	newnode->n = n;

	/* point temp where head is pointing */
	temp = *head;

	/* check if list is empty */
	if (temp == NULL)
	{
		/* assign head to newnode */
		newnode->next = NULL;
		/* point newnode -> to null */
		*head = newnode;
	}
	/* if list is not empty add newnode at index */
	while (temp->next != NULL && i < idx - 1)
	{
		prevnode = temp;
		if (prevnode->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	newnode->next = prevnode->next;
	prevnode->next = newnode;

	return (newnode);
}
