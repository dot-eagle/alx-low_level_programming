#include "main.h"

/**
 * is_prime_number - returns 1 if input integer is a prime number, else 0
 * @n: integer input number
 *
 * Return: 1 if n is prime, else 0
 */

int is_prime_number(int n)
{
	static int s = 2;

	if (n < 2)
	{
		return (0);
	}

	if (n < s * 2)
	{
		s = 2;
		return (1);
	}

	if (n % s == 0)
	{
		s = 2;
		return (0);
	}

	else
	{
		s++;
		return (is_prime_number(n));
	}
}
