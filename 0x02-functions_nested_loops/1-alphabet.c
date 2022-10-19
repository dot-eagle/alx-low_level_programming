#include "main.h"

/**
 * rint_alphabet - print alphabets
 *
 * Description: print_alphabet use to print a to z
 *
 * Return: return void
 */

void print_alphabet(void)
{ 
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
