#include "lists.h"

/**
 * listint_len -returns the number of elements in a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
