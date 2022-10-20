#include "main.h"

/**
 * main -finds and prints the first 98 Fibonacci numbers,starting with 1 and 2
 *
 * Return: 0 as success
 *
 */

int main(void)
{
	long i, ms, mb, ns, nb, zerocount;

	ns = 2;
	ms = 1;
	nb = ns - ns;
	mb = ms - ms;
	printf("%ld, %ld, ", ms, ns);
	for (i = ns + ms; i <= 98; i++)
	{
		ns = ns + ms;
		ms = ns - ms;
		if (ns / 1000000000 > 0)
		{
			nb++;
			ns = ns % 1000000000;
		}
		nb = nb + mb;
		mb = nb - mb;
		if (nb)
		{
			printf("%ld", nb);
			zerocount = ns;
			while (zerocount < 100000000)
			{
				printf("0");
				zerocount *= 10;
			}
		}
		printf("%ld", ns);
		if (i < 98)
		printf(", ");
	}
	printf("\n");
	return (0);
}
