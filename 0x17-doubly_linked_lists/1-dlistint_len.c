#include "lists.h"

/**
 * dlistint_len - returns number of elements/nodes in doubly list
 * @h: the pointer to the head/first node
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
