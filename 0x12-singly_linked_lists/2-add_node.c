#include "lists.h"

/**
 * strlen -  calculate string lenght of a string
 * @str - string to be measured
 * Return: number of char in string except null character
 */

size_t _strlen(const char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node -  this adds new node beginning of list_t linked list
 * @head: pointer to the head node
 * @str: pointer to string data to be passed to new node str member
 * Return: address to new element 
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{	free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
