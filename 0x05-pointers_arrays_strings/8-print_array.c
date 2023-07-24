#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 *@n: number of elements
 *@a: array used
 *
 * Return: (0)
 */

void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		printf("%d", a[w]);
		if (w < n - 1)
			printf(", ");
	}
	printf("\n");
}
