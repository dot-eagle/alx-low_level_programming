#include "main.h"
#include "main.c"
/**
 * print_alphabet - print alphabets
 *
 * Description: print_alphabet use to print a to z
 *
 * Return: return void
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
