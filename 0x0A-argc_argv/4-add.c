#include <stdlib.h>
#include <stdio.h>

/**
 * main - add positive numbers
 * @argv: String that holds the passed Arguments
 * @argc: count arguments passed in argv
 *
 * Return: 0 else 1
 */

int main(int argc, char *argv[])
{
	int d;
	long e;

	for (d = 1, e = 0; d < argc; d++)
	{
		if (*argv[d] == 0 || atoi(argv[d]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		e += atoi(argv[d]);
	}
	printf("%ld\n", e);
	return (0);
}
