#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 *
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int m = 0;

	while (m < argc)
	{
		printf("%s\n", argv[m]);
		m++;
	}
	return (0);
}
