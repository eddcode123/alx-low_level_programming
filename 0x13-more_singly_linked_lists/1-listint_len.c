#include "lists.h"

/**
 * listint_len - prints the elements of listint_t list.
 * @h: head of the list
 *
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	/* declare a count variable */
	size_t count = 0;

	/* traverse the list while h is not null*/
	while (h != NULL)
	{
		h = h->next;
		/* use count to find len of list */
		count++;
	}
	return (count);
}
