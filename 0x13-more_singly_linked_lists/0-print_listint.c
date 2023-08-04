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

	/* traverse the list while h is not null*/
	while (h != NULL)
	{
		/* print values of node */
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
