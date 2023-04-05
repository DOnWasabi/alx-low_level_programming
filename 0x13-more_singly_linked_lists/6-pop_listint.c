#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: the data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_head;

	if (*head == NULL)
	return (0);

	data = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;

	return (data);
}
