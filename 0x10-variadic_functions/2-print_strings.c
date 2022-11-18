#include "variadic_functions.h"

/**
 * print_strings - prints string arguments supplied
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *g;
	unsigned int d;

	va_list strings;

	va_start(strings, n);

	d = 0;
	while (d < n)
	{
		g = va_arg(strings, char *);

		if (g == NULL)
		{
			printf("%p", g);
		}
		else
		{
			printf("%s", g);
		}
		if (separator != NULL && d < n - 1)
		{
			printf("%s", separator);
		}
		d++;
	}
	va_end(strings);
	printf("\n");
}
