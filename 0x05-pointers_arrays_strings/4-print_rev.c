#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 *@s: printed strings
 *
 * Return: (0)
 */

void print_rev(char *s)
{
	int w;
	int count = 0;

	for (w = 0; s[w] != '\0'; w++)
		count++;
	for (w = count - 1; w >= 0; w--)
		_putchar(s[w]);
	_putchar('\n');
}
