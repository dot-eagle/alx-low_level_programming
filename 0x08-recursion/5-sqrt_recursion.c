#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: natural intger number
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);

	else if (n <= 1 && n >= 0)
		return (n);

	if (!(n % 2))
	{
		if (n / 2 == 2 || n == 2)
			return (2);
		sqrt = _sqrt_recursion(n / 2);
		if (n / sqrt == sqrt)
			return (sqrt);
		else if (sqrt > 1)
			return (sqrt * 2);
		return (-1);
	}
	else
		return (sqrt_rec_odd(n, n - 2));
}
