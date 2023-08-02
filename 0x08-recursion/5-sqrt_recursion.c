#include "main.h"

/**
 * _sqrt - square root of a number
 *
 * @n: input number
 * @c: iterator
 *
 * Return: square root
 */

int _sqrt(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c > n)
	{
		return (-1);
	}
	return (_sqrt(n, c + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: parameter
 *
 * Return: (-1)
 *
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
