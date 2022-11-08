#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * segf - Let's segfault \o/
 *
 * Return: 0
 */

void segf(void)
{
	char *str;

	str = "Holberton";
	str[0] = 's';
}

/**
 * main - concept introduction
 *
 * Return: 0
 */

int main(void)
{
	segf();
	return (0);
}
