#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: parameter contents
 * @s2: parameter null terminated
 *
 * Return: (NULL)
 */

char *str_concat(char *s1, char *s2)
{
	size_t i;
	size_t j;
	size_t k;
	size_t limit;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}
	for (limit = 0; limit < j; limit++)
	{
		ptr[k] = s2[limit];
		k++;
	}
	return (ptr);
}
