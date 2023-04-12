#include "main.h"

/**
 * *create_array - creats an arry of chars
 * initiilizes with specific char
 * @c: char
 * @size: the size of the memory to print
 * Return: pointing to the array initialized or null
 */

char *create_array(unsigned int size, char c)
{
	char *num = malloc(size);

	if (size == 0 || num == 0)
		return (0);

	while (size--)
		num[size] = c;

	return (num);
}
