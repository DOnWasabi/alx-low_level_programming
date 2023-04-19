#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: double pointer to the head of the linked list
 * @index: index of the node to delete (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
	}

	prev = *head;
	current = (*head)->next;
	for (i = 1; current != NULL && i < index; i++)
	{
	prev = current;
	current = current->next;
	}

	if (current == NULL)
	return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}