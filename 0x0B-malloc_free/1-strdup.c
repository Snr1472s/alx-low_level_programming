#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns pointer to malloc, which contains copy of string
 *
 * @str: parameter
 *
 * Return: (NULL)
 */

char *_strdup(char *str)
{
	size_t i;
	size_t j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	strdout = (char *)malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);
}
