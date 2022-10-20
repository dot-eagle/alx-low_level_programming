#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 as success
 *
 */

int main(void)
{
	int f, sum;

	sum = 0;
	for (f = 1; f < 1024; f++)
	{
		if (f % 3 == 0 || f % 5 == 0)
			sum += 1;
	}
	printf("%d\n", sum);

	return (0);
}
