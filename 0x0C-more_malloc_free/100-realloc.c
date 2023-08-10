#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory block using malloc and free
 *
 * @ptr: pointer
 * @old_size: old parameter value
 * @new_size: new parameter value
 *
 * Return: NULL
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t i;
	size_t max = new_size;
	char *oldp = ptr;
	char *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
