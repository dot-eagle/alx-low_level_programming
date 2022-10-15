#include <string.h>
#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0 as success
 */

int main(void)
{
	int p = '0';
	int q = '0';

	while (p <= '9')
	{
		while (q <= '9')
		{
			if (!(p > q || p == q))
			{
				putchar(p);
				putchar(q);
				if (p == 8 && q == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			q++;
		}
		q  = '0';
		p++;
	}
	return (0);
}
