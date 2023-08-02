#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of list
 * @str: string to add to crated node
 *
 * Return: address of node
 * or null if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* declare newnode to add at end of list */
	list_t *endNode;
	list_t *temp;
	/* allocate memory to endnode */
	endNode = (list_t *) malloc(sizeof(list_t));

	/* check if malloc failed */
	if (endNode == NULL)
		return (NULL);
	/* assign values to endNode */
	endNode->str = strdup(str);
	endNode->len = strlen(str);

	/* point endNode next to NULL */
	endNode->next = NULL;
	temp = *head;
	/* check if list is empty */
	if (temp == NULL)
	{
		/* point head to endNode */
		*head = endNode;
	}
	else
	{
		/* use a loop to go to end of list */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* point endnode to null then point temp->next to endNode */
		temp->next = endNode;
	}

	return (*head);
}
