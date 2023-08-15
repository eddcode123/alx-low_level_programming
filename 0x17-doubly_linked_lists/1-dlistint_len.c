#include "lists.h"

/**
 * dlistint_len - checks for of elements in doubly linked list.
 * @h: head of the list
 *
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* declar count to keep len of list */
	size_t count = 0;

	/* check if list is empty */
	if (h == NULL)
		return (count);
	/* traverse the list till h->next is null */
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
