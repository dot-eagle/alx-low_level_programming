#include "variadic_functions.h"

/**
 * print_numbers - prints given numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Retturn: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int r;

	va_start(valist, n);
	for (r = 0; r < n; r++)
	{
		printf("%d", va_arg(valist, int));
		if (r + 1 < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
