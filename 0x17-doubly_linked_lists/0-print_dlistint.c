#include "lists.h"

/**
 * print_dlistint - prints all elements' data of the list
 * @h: the pointer to head/first node of the list
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t i;

	if (!temp)
		return (0);
	while (temp != NULL)
	{
		i++;
		printf("%d\n", temp->n;
		temp = temp->next;
	}
	return (i);

}
