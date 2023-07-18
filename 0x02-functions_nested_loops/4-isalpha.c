#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Description: using _putchar to print
 *@c: function parameter
 * Return: (1) if (c) is lower otherwise (0)
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
