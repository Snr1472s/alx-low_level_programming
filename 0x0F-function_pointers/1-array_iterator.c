#include "function_pointers.h"
/**
 * array_iterator - iterates via an array
 * @array: target array
 * @size: size of the array
 * @action: function pointer to the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
