#include <stdio.h>

/**
 * print_school - prints "school"
 *
 * Return: 0
 */

void print_school(void)
{
	char str[] = "Holberton";

	str[0] = 's';
	printf("%s\n", str);
}
/**
 * main - concept introduction
 *
 * Return: 0
 */

int main(void)
{
	print_school();
	return (0);
}
