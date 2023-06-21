#include <stdio.h>
#include "function_pointers.h"i

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function that print a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return (0);
	f(name);
}
