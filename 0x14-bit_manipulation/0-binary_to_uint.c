#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;

	while (b[len] != '\0')
	{
		len++;
	}

	unsigned int sum = 0;
	int i;

	if (b == NULL)
		return (sum);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * pow(2, len - i - 1);
	}
	return (sum);
}
