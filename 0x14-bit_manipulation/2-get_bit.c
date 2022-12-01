#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index, starting from 0 of the bit you want to get
 * @n: number of bits
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	val_bit = ((n >> index) & 1);

		if (index > 64)
		{
			return (-1);
		}
		else
		{
			return (val_bit);
		}
}
