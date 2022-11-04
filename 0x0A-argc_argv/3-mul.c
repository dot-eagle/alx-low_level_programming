#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 *
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int e = 0;

	if (argc == 3)
	{
		e = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", e);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
