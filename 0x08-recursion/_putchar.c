#include "main.h"

/**
 * _putchar - this prints character to stdout
 * @c: character to be printed
 * Return: return 1, number of bytes printed, else -1
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
