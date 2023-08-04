#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: count strings
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int w;
	int count = 0;

	for (w = 0; s[w] != '\0'; w++)
		count++;
	return (count);
}
