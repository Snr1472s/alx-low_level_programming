#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Description: using _putchar to print
 *@c: parameter to be checked
 * Return: (1) if (c) is lower otherwise (0)
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
