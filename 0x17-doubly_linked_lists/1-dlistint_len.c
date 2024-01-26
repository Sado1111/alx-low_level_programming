#include "lists.h"

/**
 * dlistint_len - returns number of elements/nodes in doubly list
 * @h: the pointer to the head/first node
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t i;

	temp = h;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
