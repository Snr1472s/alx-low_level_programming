#include "main.h"
/**
 * print_square - prints a square #
 *@size: input number of # square
 * Return: void
 *
 */

void print_square(int size)
{
	int w, c;

	if (size > 0)
	{
		for (w = 0; w < size; w++)
		{
			for (c = 0; c < size; c++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
