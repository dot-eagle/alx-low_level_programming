#include "3-calc.h"

/**
 * main - main function perform a calulaction based on given operator & number
 * @argc: parameter argument count
 * @argv: parameter argument Vector
 *
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int (*operand)(int, int);

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n"), exit(100);
	}

	operand = get_op_func(argv[2]);

	if (operand == NULL || argv[2][1] != '\0')
	{
		printf("Error\n"), exit(99);
	}

	printf("%d\n", ((*operand)(atoi(argv[1]), atoi(argv[3]))));

	return (0);
}
