#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Argument passed to the function
 *
 * Return: 0 as success
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
