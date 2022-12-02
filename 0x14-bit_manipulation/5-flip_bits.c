#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @m: one bit
 * @n: another bit
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor, num_bits;

	num_bits = 0;
	xor = n ^ m;

	while (xor)
	{
		num_bits += xor & 1;
		xor >>= 1;
	}

	return (num_bits);
}
