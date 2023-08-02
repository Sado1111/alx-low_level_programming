#include "main.h"

/**
 * _pow_recursion - calculate a number x to the power of another, y
 * @x: base number to be raised
 * @y: the power or exponent
 * Return: value of x raised to power of y or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
