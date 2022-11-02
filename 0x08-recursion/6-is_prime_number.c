#include "main.h"

/** int prime_number(int n, int a); */


/**
 * is_prime_number - returns 1 if input integer is a prime number, else 0
 * @n: integer input number
 *
 * Return: 1 if n is prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_number(n));
}

/**
 * prime_number - function for is_prime_number
 * @n: integer number to be tested
 * @a: number to test with
 *
 * Return: 1 if a Prime else 0
 */

int prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	else if (n % a == 0)
		return (0);
	else if (n % a != 0)
		return (prime_number(n, a - 1));
	else
		return (0);
}
