#include <stdio.h>

/**
 * main - print the latters of the alphabet
 *
 * Description: print the latters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
