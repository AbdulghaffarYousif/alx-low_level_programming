#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: integer length
 */

int _strlen_recursion(char *s)
{
	int count = 0;
	int i = 0;
	for (i; s[i] != NULL; i++)
	{
		count ++;
	}
	return count;
}
