#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 as success
 */

int main(void)
{
	int co = '0';

	while (co <= '9')
	{
		putchar(co);
		if (co != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++co;
	}

		putchar('\n');
		return (0);
}
