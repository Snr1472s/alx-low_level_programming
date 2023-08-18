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
	unsigned int j, arr;

	va_start(i, n);

	for (j = 0; j < n; j++)
	{
		arr = va_arg(i, unsigned int);
		printf("%d", arr);

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(i);
	printf("\n");
}
