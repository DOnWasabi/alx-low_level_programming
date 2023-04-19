#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that return index place if comparison = true, else -1
 * @array: array
 * @size: number of elements in the array
 * @cmp: a pointer to the function used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
