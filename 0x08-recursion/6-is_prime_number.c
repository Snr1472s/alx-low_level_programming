#include "main.h"

/**
 *  _prime - calculate prime
 *
 *  @a: input parameter
 *  @b: divisor
 *
 *  Return: (0)
 */

int _prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (_prime(a, b + 1));
}


/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 *
 * @n: parameter
 *
 * Return: (1) otherwise (0)
 *
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
