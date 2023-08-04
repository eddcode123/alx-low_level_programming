#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list.
 * @head: head of list to be deleted
 *
 * Return: data of n in the list
 * or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	/* declare a temp, cur and n variable to store value of n */
	int n;
	listint_t *temp;
	listint_t *cur;
	/* check if the list is empty */
	if (*head == NULL)
		return (0);
	/* point current to where head is pointing */
	cur = *head;

	/* assign n the value of head->n */
	n = cur->n;

	/* pass the address of cur->next to temp */
	temp = cur->next;
	/* delete the head at current */
	free(cur);
	/* point head to next node */
	*head = temp;

	return (n);
}
