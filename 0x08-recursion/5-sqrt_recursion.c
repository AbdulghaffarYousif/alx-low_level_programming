#include "main.h"

/**
 * _sqrt_recursion: returns the natural square root of a number
 * sqtr: returns integer as candidate for square root
 * @n: intger
 * @x: intger
 * Return: intger
 */

int sqtr(int n, int x);
int _sqrt_recursion(int n)
{
	return (sqtr(n, 1));
}

/**
 * _sqrt_recursion: returns the natural square root of a number
 * sqtr: returns integer as candidate for square root
 * @n: intger
 * @x: intger
 * Return: intger
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
