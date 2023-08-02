#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the list.
 * @str: string to add to new node
 *
 * Return: address of new element
 * or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/* declare new node */
	list_t *newNode;
	/* allocate memory for newNode using malloc */
	newNode = (list_t *) malloc(sizeof(list_t));

	/* check if malloc failled */
	if (newNode == NULL)
		return (NULL);
	/* assign values to newNode */
	newNode->str = strdup(str);
	newNode->len = strlen(str);

	/* check if list is empty */
	if (*head == NULL)
	{
		/* if empty assign newNode null */
		newNode->next = NULL;
	}
	else
		/* add newNode at the begining */
		newNode->next = *head;
	/* point head to newNode */
	*head = newNode;

	return (*head);
}
