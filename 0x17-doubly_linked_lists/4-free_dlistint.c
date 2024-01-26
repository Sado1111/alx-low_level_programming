#include "lists.h"

/**
 * free_dlistint - frees all the nodes in the list
 * @head: pointer to the head/first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
