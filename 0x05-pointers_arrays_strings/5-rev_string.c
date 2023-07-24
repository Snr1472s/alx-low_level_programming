#include "main.h"

/**
 * rev_string - reverses a string
 *
 *@s: printed reversed string
 *
 * Return: (0)
 */

void rev_string(char *s)
{
	int w;
	int count = 0;

	for (w = 0; s[w] != '\0'; w++)
		count++;
	for (w = 0;  w < count / 2; w++)
	{
		char o;

		o = s[w];
		s[w] = s[count - 1 - w];
		s[count - 1 - w] = o;
	}
}
