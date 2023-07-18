#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 */
void print_alphabet(void)
{
	char apc;

	apc = 'a';
	while (apc <= 'z')
	{
		_putchar(apc);
		apc++;
	}
	_putchar('\n');
}
