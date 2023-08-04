#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: line argument
 * @argv: array argument
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
