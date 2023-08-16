#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node on the list.
 * @head: head of list.
 * @index: index of the node to return
 *
 * Return: pointer to the nth index
 * or NULL if index does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* declare varables to use */
	size_t currentindex = 0; /* starting index */

	/* check if index is zero */
	if (index == 0)
		return (head);
	/* traverse list if not empty */
	while (head != NULL && currentindex < index)
	{
		/* point temp to next node */
		head = head->next;
		/* increament i */
		currentindex++;
	}
	/* check if the index does not exist */
	if (head == NULL && currentindex < index)
		return (NULL);

	/* else return */
	return (head);
}
