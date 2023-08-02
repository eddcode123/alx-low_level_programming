#include "lists.h"

/**
 * list_len - prints the length of the list
 * @h: head of the list
 *
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	/* declare a count variable and initialize to 0 */
	size_t count = 0;

	/* chech if list is empty */
	if (h != NULL)
	{
		/* if list is not empty use a loop to find len */
		while (h->next != NULL)
		{
			/* increamnt count each iteration */
			count += 1;
			/* point head to the next list each itearation */
			h = h->next;
		}
		/* increament count by 1 for the last list */
		count += 1;
	}

	return (count);
}
