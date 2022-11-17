#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit (98);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit (99);
	}
	return (0);
}
