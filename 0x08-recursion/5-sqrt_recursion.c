#include "main.h"

/**
 * _sqrt - this checks for square root of @b
 * @a: integer that root is to be tested
 * @b: number we are to fu=ind its square root
 * Return: natural square root or -1 if there is none
 */

int _sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion - get natural square root of a number recursively
 * @n: number to find its square root
 * Return: the natural sqrt or -1 if not possible
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
