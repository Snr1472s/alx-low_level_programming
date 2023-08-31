#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: parameter
 * Return: (0)
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_b_n(n);
	}
}


/**
 * print_b_n - print b_n rrecursively
 *
 * @n: parameter
 * Return: (0)
 */

void print_b_n(unsigned long int n)
{
	if (n == 0)
		return;
	print_b_n(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
