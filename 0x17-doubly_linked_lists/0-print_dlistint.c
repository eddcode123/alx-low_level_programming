#include "lists.h"

/**
 * print_dlistint - prints all elements of a list.
 * @h: head of the list.
 *
 * Return: number of nodes;
 */

size_t print_dlistint(const dlistint_t *h)
{
	/* declare variables to use */
	size_t count = 0;

	/* check if list is empty */
	if (h == NULL)
		return (count);
	/* traverse the list and print elements */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		/* update head to point to next node */
		h = h->next;
		/* increment count */
		count++;
	}

	return (count);
}
