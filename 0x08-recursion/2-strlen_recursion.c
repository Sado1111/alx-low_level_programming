#include "main.h"

/**
 * _strlen_recursion - calculates string length recursively
 * @s: this is string to be calculated
 * Return: the length calculated
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);

}
