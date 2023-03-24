#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * Do not print 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	for (int num = '0'; num <= '9' && num != '2' && num != '4'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
