#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: printed strings
 *
 * Return: (0)
 */

void _puts(char *str)
{
	int w;

	for (w = 0; str[w] != '\0'; w++)
		_putchar(str[w]);
	_putchar('\n');
}
