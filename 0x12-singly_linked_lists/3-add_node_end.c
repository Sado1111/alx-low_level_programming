#include "lists.h"

/**
 * _strlen -  calculate string lenght of a string
 * @str: string to be measured
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
 * add_node_end - adds new node to end of list_t list
 * @head: pointer to the head or first node
 * @str: char array to fill new node's str var element
 * Return: address of the new element added behind
 */



list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *current;

	if (str == NULL)
		return (NULL);

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);
	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
	end_node->len = _strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;	
		return (end_node);
	}

	current = *head;

	while (current->next)
	{
		current = current->next;
	}
	current->next = end_node;

	return (end_node);
}
