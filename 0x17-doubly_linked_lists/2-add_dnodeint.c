#include "lists.h"

/**
 * add_dnodeint - adds new node to the list's beginning
 * @head: poointer to the head/first node
 * @n: new inserted node's data value
 * Return: address of the node added at list's beginning
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
