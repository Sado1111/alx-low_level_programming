#include "lists.h"

/**
 * list_len - returns number of elements in linked list_t list
 * @h: pointer to head or first node
 * Return: length / no of nodes in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
