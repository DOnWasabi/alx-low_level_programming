#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 *
 * Return: The nth node of the list, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current ? current : NULL);
}
