#include "3-calc.h"

/**
 * get_op_func -  selects the correct function to perform
 * the operation asked by the user
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the corresponding math function or NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int v = 0;

	while (ops[v].op)
	{
		if (*(ops[v].op) == *s && *(s + 1) == '\0')
			return (ops[v].f);
		v++;
	}
	return (0);
}
