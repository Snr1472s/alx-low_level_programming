#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int w, g;

	for (w = 0; w <= 9; w++)
	{
		for (g = 0; g <= 14; g++)
		{
			if (g >= 10)
			{
			_putchar((g / 10) + '0');
			}
		_putchar((g % 10) + '0');
		}
		_putchar('\n');
	}
}
