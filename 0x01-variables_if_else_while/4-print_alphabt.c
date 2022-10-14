#include <stdio.h>
/**
 * main - printing lowercase alphabets except q and e
 * Return: 0 as success
 */

int main(void)
{
	char alp = 'a';

	while (alp <=  'z')
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
