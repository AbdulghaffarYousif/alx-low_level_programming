#include "main.h"

/**
 * check_int - checks integer as candidate for square root
 * @sqtr: square integer
 * @x: integer
 * Return: 1 if
 */
int sqtr(int n, int x);
int _sqrt_recursion(int n)
{
	return (sqtr(n, 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer - square root, if none returns -1
 */

int sqtr(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else if ((x * x) < n)
	{
		return (sqtr(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
