#include "main.h"

/**
 * _isdigit - checks for digits from 0 to 9
 *
 * Return: 1 if digit, 0 if not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
