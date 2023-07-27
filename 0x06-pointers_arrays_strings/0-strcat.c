#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int w;
	int o;

	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}
	o = 0;
	while (src[o] != '\0')
	{
		dest[o] = src[o];
		w++;
		o++;
	}

	dest[w] = '\0';
	return (dest);
}
