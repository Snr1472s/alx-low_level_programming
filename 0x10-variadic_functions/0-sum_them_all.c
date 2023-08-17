#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: parameter
 * Desc: Write a function that returns the sum of all its parameters
 *
 * Return: (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list i;
	unsigned int j, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(i, n);
	for (j = 0; j < n; j++)
	{
		sum += va_arg(i, int);
	}
	va_end(i);

	return (sum);
}
