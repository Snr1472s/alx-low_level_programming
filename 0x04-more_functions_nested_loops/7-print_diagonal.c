#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: input integer
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int w, c;

	for (w = 0; w < n; w++)
	{
		if (n > 1)
			for (c = 0; c < w; c++)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
