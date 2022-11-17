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
	unsigned int i;
	int s = 0, m;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		m += va_arg(args, unsigned int);
		s = s + m;
	}
	va_end(args);
	return (s);
}
