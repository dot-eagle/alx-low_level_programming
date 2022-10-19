#include "main.h"
/**
 * main - print out the characters
 *
 * Description: return the required results
 *
 * Return: 0 return integer value 0
 */

int main(void)
{
	int n;
	char name[8] = "_putchar";

	for (n = 0; n < 8; n++)
	{
		_putchar(name[n]);
	}
	_putchar('\n');

	return (0);
}
