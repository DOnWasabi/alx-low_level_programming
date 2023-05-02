#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: A pointer to the head node of the list.
 *
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int n;

	if (*head == NULL)
	return (0);

	curr = *head;
	*head = (*head)->next;
	n = curr->n;
	free(curr);

	return (n);
}
