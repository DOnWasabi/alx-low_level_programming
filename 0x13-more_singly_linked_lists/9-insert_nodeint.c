#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *mem;
	listint_t *curr = *head;

	mem = malloc(sizeof(listint_t));
	if (!mem || !head)
		return (NULL);

	mem->n = n;
	mem->next = NULL;

	if (idx == 0)
	{
		mem->next = *head;
		*head = mem;
		return (mem);
	}

	for (j = 0; curr && j < idx; j++)
	{
		if (j == idx - 1)
		{
			mem->next = curr->next;
			curr->next = mem;
			return (mem);
		}
		else
			curr = curr->next;
	}

	return (NULL);
}
