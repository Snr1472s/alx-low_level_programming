#include "main.h"

/**
 * swap_int - swaps the values of two integer
 *
 * @a: value (1)
 * @b: value (2)
 *
 * Return: always (0)
 */

void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;
}
