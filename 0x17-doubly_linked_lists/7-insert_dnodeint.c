#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of list
 * @idx: position to insert node.
 * @n: data to enter to newnode
 *
 * Return: address of newnode
 * or null if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *newnode, *temp, *nextnode;

    if (idx == 0)
    {
        newnode = add_dnodeint(h, n);
        return newnode;
    }

    unsigned int currentindex = 0;

    temp = *h;

    while (temp != NULL && currentindex < idx - 1)
    {
        temp = temp->next;
        currentindex++;
    }

    if (temp == NULL)
    {
        return NULL;
    }

    if (temp->next == NULL)
    {
        newnode = add_dnodeint_end(h, n);
    }
    else
    {
        newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
        if (newnode != NULL)
        {
            newnode->n = n;
            nextnode = temp->next;
            newnode->prev = temp;
            temp->next = newnode;
            newnode->next = nextnode;
            nextnode->prev = newnode;
        }
    }

    return newnode;
}
