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
	int f, nu_bytes;
	char *op_co = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nu_bytes = atoi(argv[1]);

	if (nu_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = 0;
	while (f < nu_bytes)
	{
		printf("%02x", op_co[f] & 0xFF);
		if (f != nu_bytes - 1)
		{
			printf(" ");
		}
		f++;
	}
	printf("\n");
	return (0);
}
