#include "main.h"

/**
 * reverse_array - unction that reverses the content of an array of integers
 * @a: pointer
 * @n: number of elements of the array
 *
 * Return: void
 *
 */


void reverse_array(int *a, int n)
{
	int t, d;

	for (d = n - 1; d >= n / 2; d--)
	{
		t = a[n - 1 - d];
		a[n - 1 - d] = a[d];
		a[d] = t;
	}
}
