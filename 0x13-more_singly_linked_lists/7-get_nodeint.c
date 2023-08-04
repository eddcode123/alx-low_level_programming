#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the list
 * @index: is the nth index to return
 *
 * Return: nth index
 * or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* declare variable to iterate through list */
	size_t i = 0, count = 0;

	/* declare a temp variable to traverse through list */
	listint_t *temp;

	/* check if list is empty */
	if (head != NULL)
	{
		/* point temp where head is pointing */
		temp = head;
		/* use a while loop to find lenght of list */
		while (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		/* check if index exist */
		if (index > count && temp == NULL))
			return (NULL);
		/* reset temp to the start of the list */
		temp = head;

		while (temp != NULL && i < index)
		{
			temp = temp->next;
			i++;
		}
	}
	return (temp);
}
