#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: input
 * @argv: input
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int money = atoi(argv[1]);
	int cents[10] = {25, 10, 5, 2, 1};
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				change = change + (money / cents[i]);
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", change);
		return (0);
	}
}
