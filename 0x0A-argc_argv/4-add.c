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
	int d, h, k;

	k = 0;

	for (d = 1; d < argc; d++)
	{
		for (h = 0; argv[d][h] != '\0' ; h++)
		{
			if (argv[d][h] < 47 || argv[d][h] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		k += atoi(argv[d]);
	}
	printf("%d\n", k);
	return (0);
}
