#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of the list
 * @n: value to add to new node
 *
 * Return: address of new element
 * or Null upon failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declare newNode and temp pointer */
	listint_t *newNode;
	listint_t *temp;

	/* allocate memory tpo new node */
	newNode = (listint_t *) malloc(sizeof(listint_t));

	/* check if malloc failed */
	if (newNode == NULL)
		return (NULL);
	/* assign newnode-> n n value */
	newNode->n = n;

	/* point temp to where head is pointing */
	temp = *head;

	/* chech if the list is empty */
	if (temp == NULL)
		*head = newNode;
	else
	{
		/* traverse the list */
		while (temp->next != NULL)
			temp = temp->next;
		/* pass adresses of newnode to temp->next */
		temp->next = newNode;
	}
	/* point newnode-> to null */
	newNode->next = NULL;

	return (*head);
}
