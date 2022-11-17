#include "3-calc.h"

/**
 * op_add - adds a & b
 * @a: int
 * @b: int
 *
 * Return: sum / result
 */

int op_add(int a, int b)
{
	int addition;

	addition = (a + b);

	return (addition);
}

/**
 * op_sub - runs the difference of a and b
 * @a: value
 * @b: value
 *
 * Return: difference / result
 */

int op_sub(int a, int b)
{
	int subtraction;

	subtraction = (a - b);

	return (subtraction);
}

/**
 * op_mul - runs the product of a and b
 * @a: value a
 * @b: value b
 *
 * Return: multiplication result
 */

int op_mul(int a, int b)
{
	int multiplication;

	multiplication = (a * b);

	return (multiplication);
}

/**
 * op_div - runs the result of the division of a by b
 * @a: int a
 * @b: int b
 *
 * Return: division result
 */

int op_div(int a, int b)
{
	int division;

	division = (a / b);

	return (division);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: numerator
 * @b: denominator
 *
 * Return: modulo result
 */

int op_mod(int a, int b)
{
	int modulo;

	modulo = (a % b);

	return (modulo);
}
