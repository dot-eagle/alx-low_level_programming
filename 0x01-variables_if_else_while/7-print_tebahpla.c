#include <stdio.h>
/**
 * main - printing the alphabet in reverse
 *
 * Return: 0 as success
 */

int main(void)
{
	char pla = 'z';

	while (pla >= 'a')
	{
		putchar(pla);
		pla--;
	}
	putchar('\n');

	return (0);
}
