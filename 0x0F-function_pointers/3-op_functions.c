#include "3-calc.h"

/**
 * op_add - adds a & b
 * @a: int
 * @b: int
 *
 * Returns: sum
 */

int op_add(int a, int b)
{
	addition = (a + b);

	return (addition);
}

/**
 * op_sub - runs the difference of a and b
 * @a: value
 * @b: value
 *
 * Returns: difference
 */

int op_sub(int a, int b)
{
	subtraction = (a - b);

	return (subtraction);
}

/**
 * op_mul - runs the product of a and b
 * @a: value a
 * @b: value b
 *
 * Return: multiplication
 */

int op_mul(int a, int b)
{
	multiplication = (a * b);

	return (multiplication);
}

/**
 * op_div - runs the result of the division of a by b
 * @a: int a
 * @b: int b
 *
 * Return: division
 */

int op_div(int a, int b)
{
	division = (a / b);

	return (division);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: numerator
 * @b: denominator
 *
 * Return: modulo
 */

int op_mod(int a, int b)
{
	modulo = (a % b);

	return (modulo);
}
