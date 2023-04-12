#include "main.h"

/**
 * *_strdup - function returns a pointer to a new string
 *  which is a duplicate of the string str. Memory for the new string
 *  @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int j = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\n'; size++)
		;

	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; j < size; j++)
			n[j] = str[j];
	}
	return (n);
}
