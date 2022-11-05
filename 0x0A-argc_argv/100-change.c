#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argv: amount of money given in singles
 * @argc: number of arguments
 * Return: 0 else 1 if error
 */

int main(int argc, char *argv[])
{
	int coins, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	coins = 0;
	while (change >= 25)
	{
		coins++;
		change -= 25;
	}
	while (change > 0)
	{
		if (change >= 10)
		{
			coins++;
			change -= 10;
		}
		else if (change >= 5)
		{
			coins++;
			change -= 5;
		}
		else if (change >= 2)
		{
			coins++;
			change -= 2;
		}
		else if (change >= 1)
		{
			coins++;
			change -= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
