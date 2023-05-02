#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nod = *head;
	listint_t *curr = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nod);
		return (1);
	}

	while (x < index - 1)
	{
		if (!nod || !(nod->next))
			return (-1);
		nod = nod->next;
		x++;
	}


	curr = nod->next;
	nod->next = curr->next;
	free(curr);

	return (1);
}
