#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint -prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: no# of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_jum = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			node_jum++;
			h = h->next;
		}

	return (node_jum);
}

