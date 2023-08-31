#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: parameter
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, w, x, sum, power;
	int base;

	base = 2;
	sum = 0;
	power = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);

	for (w = 0; b[w] != '\0'; w++)
	{
		if (b[w] != '0' && b[w] != '1')
			return (0);
		for (x = len - 1; x > 0; x--)

			power = power * base;
		sum = sum + (power * (b[w] - 48));
		len--;
		power = 1;
	}
	return (sum);
}
