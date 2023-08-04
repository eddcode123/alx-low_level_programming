#include "lists.h"

/**
 * print_listint - prints the elements of listint_t list.
 * @h: head of the list
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	/* declare a count variable */
	size_t count = 0;

	/* check if list is empty */
	if (h != NULL)
	{
		/* traverse the list using a while loop */
		while (h->next !=  NULL)
		{
			printf("%d\n", h->n);
			/* increament count */
			count += 1;
			/* point h to next */
			h = h->next;
		}
		/* count the last node */
		count += 1;
		/* print the values off the last node */
		printf("%d\n", h->n);
	}

	return (count);
}
