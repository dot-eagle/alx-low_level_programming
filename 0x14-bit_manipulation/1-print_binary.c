#include "main.h"


/**
 * print_binary -prints the binary representation of a number
 * @n: long int number
 *
 * Return: nothing / void return
 */

void print_binary(unsigned long int n)
{
	int v, t, k, e;

	if (n == 0)
		printf("0");
	return;

	e = n, v = 0;
	while (e != 0)
	{
		v++;
		e = e >> 1;
	}

	for (t = v - 1; t >= 0; t--)
	{
		k = n >> t;

		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}
