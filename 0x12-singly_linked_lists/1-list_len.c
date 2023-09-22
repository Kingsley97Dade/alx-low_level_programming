#include "lists.h"

/**
 * list_len - This is a program that returns the number
 * of elements of a list
 * @h: list being used
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
