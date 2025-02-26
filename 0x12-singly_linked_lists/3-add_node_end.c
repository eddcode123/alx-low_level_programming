#include "lists.h"

/**
 * add_node_end - add node at the end of the linked list
 * @head: pointer to the first node
 * @str: string to insert in the node
 *
 * Return: address of the added node or null if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	/* delcare the node */
	list_t *node = (list_t *) malloc(sizeof(list_t));
	/* return null if malloc fails */
	if (node == NULL)
	{
		return (node);
	}

	/* populate the node */
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	/* treverse and append node */
	temp = *head;

	if (*head == NULL)
	{
		*head = node;
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;

	return (node);
}
