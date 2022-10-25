#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number
 * Describe
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		if (e == n - 1)
			printf("%d", *(a + e));
		else
			printf("%d, ", *(a + e));
	}
	printf("\n");
}

