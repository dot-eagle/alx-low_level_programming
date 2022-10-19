#include "main.h"
/**
 * print_alphabet_x10 - print out alphabets 10 times
 *
 * Description: return the required results
 *
 * Return: return void
 */

void print_alphabet_x10(void)
{
	int e;
	char u;

	for (e = 0; e < 10; e++)
	{
		for (u = 'a'; u <= 'z'; u++)
		{
			_putchar(u);
		}
		_putchar('\n');
	}
}
