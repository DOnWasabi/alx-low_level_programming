#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the linked list.
 * @index: index of the node to return.
 *
 * Return: pointer to the nth node, or NULL if it does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0; /* to keep track of the current node index */
	listint_t *curr = head; /* start at the head of the list */

	while (curr != NULL)
	{
		if (l == index) /* if the current index matches the desired index */
		{
			return (curr); /* return the current node */
		}
		l++; /* increment the l */
		curr = curr->next; /* move on to the next node */
	}

/* if we reach here, it means the index is out of range, return NULL */
	return (NULL);
}
