#include <stdio.h>
/**
 * main - printing the english alphaphbet in lower and upper case
 * Return: 0 as success
 */

int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP++;
	}
	putchar('\n');
	return (0);
}
