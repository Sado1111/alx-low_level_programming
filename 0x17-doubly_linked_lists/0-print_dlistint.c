#include "lists.h"

/**
 * print_dlistint - prints all elements' data of the list
 * @h: the pointer to head/first node of the list
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;


	if (!h)
		return (0);
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);

}
