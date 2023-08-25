#include "lists.h"

/**
 * print_list - prints all elements of linked list
 * @h: pointer to first (head) node of linked list
 * Return: number of node in list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
