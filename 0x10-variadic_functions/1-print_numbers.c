#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: parameter
 * @n: parameter
 *
 * Desc: Write a function that prints numbers, followed by a new line
 *
 * Return: (0)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int j;

	va_start(i, n);
	for (j = 0; j < n; j++)
	{
		if (separator)
			printf("%d%s", va_arg(i, int), separator);
		else
			printf("%d", va_arg(i, int));
	}
	printf("\n");
	va_end(i);
}
