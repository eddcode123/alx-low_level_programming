#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: head of the list
 *
 * Return: number of nodes
 * or prints nill if string is null
 */

size_t print_list(const list_t *h)
{
	/* declare count variable to count number of list */
	size_t count = 0;

	/* check if head is  null */
	if (h != NULL)
	{
		/* use a loop to iterate and print elements of list */
		while (h->next != NULL)
		{
			/* first check if str is nULL */
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			count++;
			/* ask head to go next list */
			h = h->next;
		}
		/* add 1 to count for last node */
		count += 1;
		/* printing the last element of list */
		printf("[%u] %s\n", h->len, h->str);
	}

	return (count);

}
