#include <stdlib.h>

/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count, i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (argv[count][i] > 57 || argv[count][i] < 48)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
