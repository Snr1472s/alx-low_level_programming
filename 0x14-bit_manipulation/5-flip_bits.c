#include "main.h"

/**
 * flip_bits - returns number of bits you need to flip from one num
 *
 * @n: parameter
 * @m: parameter
 * Return: (0)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int w, x;

	w = n ^ m;

	for (x = 0; w > 0;)
	{
		if ((w & 1) == 1)
			x++;
		w = w >> 1;
	}
	return (x);
}
