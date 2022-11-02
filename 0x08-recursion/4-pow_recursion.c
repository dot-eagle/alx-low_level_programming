#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: base number to be multiplied
 * @y: exponential number
 *
 * Return: vlaue
 */

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);

	if (y == 1)
		return (1);

	pow = _pow_recursion(x, --y);

	return (x * pow);
}
