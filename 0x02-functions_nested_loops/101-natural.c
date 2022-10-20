#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 as success
 *
 */

int main(void)
{
	int i, j, k, jm, km;

	i = 0;
	for (j = 0; j <= (1024 / 3); j++)
	{
		jm = 3 * j;
		i = i + jm;
	}
	for (k = 0; k <= (1024 / 5); k++)
	{
		if (!(k % 3 == 0))
		{
			km = 5 * k;
			i = i + km;
		}
	}
	printf("%i\n", i);
	return (0);
}
