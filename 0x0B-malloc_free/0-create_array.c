#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars/initializes it with a specific char
 *
 * @size: parameter
 * @c: parameter
 *
 * Return: pointer to array or (NULL)
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr =  malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
