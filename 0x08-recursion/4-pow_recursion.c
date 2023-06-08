#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: integer base
 * @y: integer exponent
 * Return: integer power
 */

int _pow_recursion(int x, int y)
{
	int p = 0;

	if (y > 0)
	{
		p = x * _pow_recursion(x,(y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else 
	{
		return (-1);
	}
	return p;
}
