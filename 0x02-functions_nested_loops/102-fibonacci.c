#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 as success
 *
 */

int main(void)
{
	int m;
	long j, k;

	j = 1;
	k = 2;
	printf("%ld, %ld, ", k, j);
	for (m = k + j; m <= 50; m++)
	{
		j = j + k;
		k = j - k;
		printf("%ld", j);
		if (m < 50)
			printf(", ");
	}
	printf("\n");

	return (0);
}
