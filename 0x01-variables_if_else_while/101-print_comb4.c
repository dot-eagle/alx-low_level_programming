#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: 0 as success
 */
int main(void)
{
	int p = '0';
	int q = '0';
	int r = '0';

	while (p <= '7')
	{
		while (q <= '8')
		{
			while (r <= '9')
			{
				if (p < q && q < r)
				{
					putchar(p);
					putchar(q);
					putchar(r);
					if (!(p == '7' && q == '8' && r == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				r++;
			}
			r = '0';
			q++;
		}
		q = '0';
		p++;
	}
	putchar('\n');
	return (0);
}
