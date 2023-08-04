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
	/* declare a variable sum */
	int sum = 0;

	/* check if the list is empty */
	if (head == NULL)
		return (0);
	/* add all the n data to sum in the list */
	while (head != NULL && head->next != NULL)
	{
		head = head->next;
		sum += head->n;
	}

	return (sum);
}
