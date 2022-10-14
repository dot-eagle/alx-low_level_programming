#include <stdio.h>
/**
 * main - printing base 16 numbers in lower case
 *
 * Return: 0 as success
 */

int main(void)
{
	int h = '0';
	char c = 'a';

	while (h <= '9')
	{
		putchar(h);
		h++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
