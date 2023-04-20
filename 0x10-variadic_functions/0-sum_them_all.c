#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - compute sum of parameters
 * @n: number of parameters
 * Return: sum (integer)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int s = o;
	int i;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, const unsigned int);

		s += x;
	}
	va_end(args);
	return (s);
}
