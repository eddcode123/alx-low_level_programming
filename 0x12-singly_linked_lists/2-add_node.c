#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node at the start of the linked list
 * @head: pointer to the first node
 * @str: pointer to string
 *
 * Return: address of the new node or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	/* declare new node */
	list_t *node;

	/* allocate memory to new node dynamically */
	node = (list_t *) malloc(sizeof(list_t));

	/* check if malloc failed to allocate  */
	if (node == NULL)
	{
		return (NULL);
	}

	/* add values to the created node */
	node->str = strdup(str);
	node->len = strlen(str);

	/* check if the list is empty */
	if (!*head)
	{
		/* point node next to null */
		node->next = NULL;
	}
	else
	{
		node->next = *head;
	}
	*head = node;

	/* return  address of node */
	return (*head);
}
