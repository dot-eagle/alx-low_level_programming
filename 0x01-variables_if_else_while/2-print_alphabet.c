#include <stdio.h>
/**
 * main - print the english alphabets in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp = 'a';

	for (alp = 'a'; alp >= 'a'; alp++)
	{
		putchar("%c\n", alp);
	}
	return (0);
}
