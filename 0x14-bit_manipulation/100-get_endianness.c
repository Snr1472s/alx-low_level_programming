#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int w;
	char *x;

	w = 1;
	x = (char *) &w;

	return ((int)*x);
}
