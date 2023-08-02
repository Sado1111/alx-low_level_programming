#include "main.h"


/**
 * _prime - checks if integer is prime or not
 * @a: this is the iterator / recurring factor / test case
 * @b: this is integer to be checked
 * Return: 1 if prime number, else 0
 */

int _prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	return (_prime(a + 1, b));
}


/**
 * is_prime_number - checks if a number is  prime number/not
 * @n: the number to be checked
 * Return: 1 if a prime number, else 0
 *
 */

int is_prime_number(int n)
{
	return (_prime(2, n));
}
