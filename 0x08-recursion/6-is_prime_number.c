#include "main.h"

int le_prime(int a, int p);

/**
 * le_prime - checkers for prime
 * @a: interger
 * @p: integer
 *
 * Return: return 1 if the input integer is prime number, else 0
 */

int le_prime(int a, int p)
{
	if (p != 1)
	{
		if (a == p)
		{
			return (1);
		}
		else if (p % a == 0 || p <= 1)
		{
			return (0);
		}
		else
			return (le_prime(a + 1, p));
	}
	return (0);
}

/**
 * is_prime_number - returns 1 if input integer is a prime number, else 0
 * @n: integer number to
 *
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
int a = 2;

return (le_prime(a, n));
}
