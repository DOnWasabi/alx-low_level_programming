#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	return (0);

	temp->next = (listint_t *) h;
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}

	free(temp);
	return (count);
}
