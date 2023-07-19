#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int k, l, results;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l < 10; l++)
		{
			results = k * l;
			if (l == 0)
				printf("%d, ", results);
			else
			{
				printf("%2d", results);
				if (l != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
