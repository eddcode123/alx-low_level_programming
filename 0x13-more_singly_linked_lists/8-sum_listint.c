#include "lists.h"

/**
 * sum_listint - finds sum of n in the list
 * @head: head of the list.
 *
 * Return: sum of all the data (n) of a listint_t linked list.
 * or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;
	
	while ( temp != NULL )
	{
		sum+=temp->n;
		temp = temp->next;
	}

	return (sum);
}
