#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: parameter
 * @index: parameter
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;

	w = 1;
	w = w << index;

	if (index > sizeof(unsigned int) * 8 || n == NULL)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n = w ^ *n;

	return (1);
}
