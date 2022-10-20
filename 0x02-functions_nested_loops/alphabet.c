#include "main.h"
#include "main.c"
/**
 * main: print_alphabet - print alphabets
 *
 * print_alphabet: print_alphabet use to print a to z
 *
 * Return: 0 return void
 *
 */

int main(void)
{
	void print_alphabet(void)
	{
		int i;

		int _putchar(char i);
		
		
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return (0);
}
