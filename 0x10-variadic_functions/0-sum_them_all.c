#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of arguments passed
 *
 * Return: required results
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	size_t d, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	d = 0;
	while (d < n)
	{
		sum += va_arg(args, unsigned int);
		d++;
	}
	va_end(args);
	return (sum);
}
