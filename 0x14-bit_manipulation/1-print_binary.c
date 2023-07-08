#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int in, j;
	unsigned long int y;

	in = 0;
	for (j = 63; j >= 0; j--)
	{
		y = (n >> j) & 1;
		if (y == 1)
			in = 1;
		if (in == 1)
			_putchar(((n >> j) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}
