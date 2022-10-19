#include "main.h"

/**
 * _abs - compute absolute value of an int
 * @c: int to be evaluated
 *
 * Description: return the required results
 *
 * Return: Absolute value of arg
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
	return (0);
}
