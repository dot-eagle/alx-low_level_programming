#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: - pointer
 * Description
 * Return: void
 */


void puts_half(char *str)
{
	int a = 0;
	int len_of_str = 0;
	int b;

	while (str[a++])
		len_of_str++;

	if ((len_of_str % 2) == 0)
		b = len_of_str / 2;
	else
		b = (len_of_str - 1) / 2;

	for (a = b; a < len_of_str; a++)
		_putchar(str[a]);

	_putchar('\n');

}
