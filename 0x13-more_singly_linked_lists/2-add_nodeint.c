#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: head of the list
 * @n: value to add to new created node
 *
 * Return: address of new node
 * or NULL upon failiure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare a node */
	listint_t *newNode;
	/* assign memory to new node */
	newNode = (listint_t *) malloc(sizeof(listint_t));

	/* add values to newNode */
	newNode->n = n;

	/* check if malloc failed */
	if (newNode == NULL)
		return (NULL);
	/* check if list is empty */
	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	*head = newNode;

	return (*head);
}
