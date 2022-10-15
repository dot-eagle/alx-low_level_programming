#include <string.h>
#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0 as success
 */

int main(void)
{
	int p, q;

	for (p = 0; p <= 8; p++)
	{
		for (q = 1; q <= 9; q++)
		{
			if (p > q)
			{
				putchar(p);
				putchar(q);
				if (q != 8 || p != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
