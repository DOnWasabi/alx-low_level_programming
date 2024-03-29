#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *novel;
	listint_t *curr = *head;

	novel = malloc(sizeof(listint_t));
	if (!novel)
		return (NULL);

	novel->n = n;
	novel->next = NULL;

	if (*head == NULL)
	{
		*head = novel;
		return (novel);
	}

	while (curr->next)
		curr = curr->next;

	curr->next = novel;

	return (novel);
}
