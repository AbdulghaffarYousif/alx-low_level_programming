#include "function_pointers.h"

/**
 * array_iterator - calls a function given a parameter on each element of array
 * @array: integer array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array+ size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
