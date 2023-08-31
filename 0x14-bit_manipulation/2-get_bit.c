#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: parameter
 * @index: parameter
 * Return: value of the bit at index index or (-1) if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int w;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (w = 0; w < index; w++)
		n = n >> 1;
	return ((n & 1));
}
