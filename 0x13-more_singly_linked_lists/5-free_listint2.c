#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the first node in the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	/* temp var hold address of prev node */
	listint_t *temp;

	/* traverse list and free nodes */
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);
	}

	*head = NULL;
}
