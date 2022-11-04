#include <stdio.h>

/**
 * main - program tha print its name
 * @argc: integer argument count
 * @argv: array argument vector for values
 *
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
