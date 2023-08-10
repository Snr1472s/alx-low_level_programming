#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: value parameter
 * @max: value parameter
 *
 * Return: pointer to the newly created array
 *
 */

int *array_range(int min, int max)
{
	int i;
	int j;
	int *k;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;

	k = malloc(sizeof(int) * j);
	if (k == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		k[i] = min;
		min++;
	}
	return (k);
}
