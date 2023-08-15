#include "lists.h"

/**
 * sum_dlistint - finds sum of all the data in the list.
 * @head: head of list.
 *
 * Return: sum of data
 * or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	/* declare sum varaible and initialize it to zero */
	int sum = 0;

	/*check if list is empty */
	if (head == NULL)
		return (0);
	/* travers list and to acess data of each list */
	while (head != NULL)
	{
		/* find sum of all data */
		sum += head->n;
		/* move to the next node */
		head = head->next;
	}

	return (sum);
}
