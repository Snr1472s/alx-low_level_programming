#include "main.h"

/**
 * puts_half - prints half of string
 *
 *@str: printed string
 *
 * Return: (0)
 */

void puts_half(char *str)
{
	int w;
	int n;
	int count = 0;

	for (w = 0; str[w] != '\0'; w++)
		count++;
	n = (count - 1) / 2;
	for (w = n + 1; str[w] != '\0'; w++)
		_putchar(str[w]);
	_putchar('\n');
}
