#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: integer argument count
 * @argv: Array argument vector for values
 *
 * Return: 0 as success
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
