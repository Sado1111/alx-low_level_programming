#include "lists.h"

/**
 * add_dnodeint_end - adds new node to the end of the list
 * @head: pointer to the head/first node of the list
 * @n: data value of new node inserted at the list's end
 * Return: address of new inserted node at the list's end
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *end_node;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	
}
